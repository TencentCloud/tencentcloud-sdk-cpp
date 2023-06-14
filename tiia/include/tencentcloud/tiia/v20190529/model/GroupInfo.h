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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 图库信息。
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图库Id。
                     * @return GroupId 图库Id。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库Id。
                     * @param _groupId 图库Id。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取图库名称。
                     * @return GroupName 图库名称。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置图库名称。
                     * @param _groupName 图库名称。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取图库简介。
                     * @return Brief 图库简介。
                     * 
                     */
                    std::string GetBrief() const;

                    /**
                     * 设置图库简介。
                     * @param _brief 图库简介。
                     * 
                     */
                    void SetBrief(const std::string& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     * 
                     */
                    bool BriefHasBeenSet() const;

                    /**
                     * 获取图库容量。
                     * @return MaxCapacity 图库容量。
                     * 
                     */
                    uint64_t GetMaxCapacity() const;

                    /**
                     * 设置图库容量。
                     * @param _maxCapacity 图库容量。
                     * 
                     */
                    void SetMaxCapacity(const uint64_t& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     * 
                     */
                    bool MaxCapacityHasBeenSet() const;

                    /**
                     * 获取该库的访问限频 。
                     * @return MaxQps 该库的访问限频 。
                     * 
                     */
                    uint64_t GetMaxQps() const;

                    /**
                     * 设置该库的访问限频 。
                     * @param _maxQps 该库的访问限频 。
                     * 
                     */
                    void SetMaxQps(const uint64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     * 
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
                     * 
                     */
                    uint64_t GetGroupType() const;

                    /**
                     * 设置图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     * @param _groupType 图库类型，对应不同服务类型，默认为1。建议手动调整为4～6，1～3为历史版本，不推荐。
参数值：
4：在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。
5：在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。
6：在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。
                     * 
                     */
                    void SetGroupType(const uint64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取图库图片数量。
                     * @return PicCount 图库图片数量。
                     * 
                     */
                    uint64_t GetPicCount() const;

                    /**
                     * 设置图库图片数量。
                     * @param _picCount 图库图片数量。
                     * 
                     */
                    void SetPicCount(const uint64_t& _picCount);

                    /**
                     * 判断参数 PicCount 是否已赋值
                     * @return PicCount 是否已赋值
                     * 
                     */
                    bool PicCountHasBeenSet() const;

                    /**
                     * 获取图库创建时间。
                     * @return CreateTime 图库创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置图库创建时间。
                     * @param _createTime 图库创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取图库更新时间。
                     * @return UpdateTime 图库更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置图库更新时间。
                     * @param _updateTime 图库更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 图库Id。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 图库名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 图库简介。
                     */
                    std::string m_brief;
                    bool m_briefHasBeenSet;

                    /**
                     * 图库容量。
                     */
                    uint64_t m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                    /**
                     * 该库的访问限频 。
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

                    /**
                     * 图库图片数量。
                     */
                    uint64_t m_picCount;
                    bool m_picCountHasBeenSet;

                    /**
                     * 图库创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 图库更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_GROUPINFO_H_
