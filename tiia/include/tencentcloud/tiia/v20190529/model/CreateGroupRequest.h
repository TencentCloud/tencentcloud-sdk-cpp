/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * CreateGroup请求参数结构体
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图库ID，不可重复，仅支持字母、数字和下划线。
                     * @return GroupId 图库ID，不可重复，仅支持字母、数字和下划线。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库ID，不可重复，仅支持字母、数字和下划线。
                     * @param GroupId 图库ID，不可重复，仅支持字母、数字和下划线。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取图库名称描述。
                     * @return GroupName 图库名称描述。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置图库名称描述。
                     * @param GroupName 图库名称描述。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取图库可容纳的最大图片数量。
                     * @return MaxCapacity 图库可容纳的最大图片数量。
                     */
                    uint64_t GetMaxCapacity() const;

                    /**
                     * 设置图库可容纳的最大图片数量。
                     * @param MaxCapacity 图库可容纳的最大图片数量。
                     */
                    void SetMaxCapacity(const uint64_t& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     */
                    bool MaxCapacityHasBeenSet() const;

                    /**
                     * 获取简介。
                     * @return Brief 简介。
                     */
                    std::string GetBrief() const;

                    /**
                     * 设置简介。
                     * @param Brief 简介。
                     */
                    void SetBrief(const std::string& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     */
                    bool BriefHasBeenSet() const;

                    /**
                     * 获取访问限制默认为10qps，如需扩容请联系[在线客服](https://cloud.tencent.com/online-service)申请。
                     * @return MaxQps 访问限制默认为10qps，如需扩容请联系[在线客服](https://cloud.tencent.com/online-service)申请。
                     */
                    uint64_t GetMaxQps() const;

                    /**
                     * 设置访问限制默认为10qps，如需扩容请联系[在线客服](https://cloud.tencent.com/online-service)申请。
                     * @param MaxQps 访问限制默认为10qps，如需扩容请联系[在线客服](https://cloud.tencent.com/online-service)申请。
                     */
                    void SetMaxQps(const uint64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     * @return GroupType 图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     */
                    uint64_t GetGroupType() const;

                    /**
                     * 设置图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     * @param GroupType 图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     */
                    void SetGroupType(const uint64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * 图库ID，不可重复，仅支持字母、数字和下划线。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 图库名称描述。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 图库可容纳的最大图片数量。
                     */
                    uint64_t m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                    /**
                     * 简介。
                     */
                    std::string m_brief;
                    bool m_briefHasBeenSet;

                    /**
                     * 访问限制默认为10qps，如需扩容请联系[在线客服](https://cloud.tencent.com/online-service)申请。
                     */
                    uint64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     */
                    uint64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_
