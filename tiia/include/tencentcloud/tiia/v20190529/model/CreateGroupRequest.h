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
                     * 获取图库可容纳的最大图片特征数量，一张图片对应一条图片特征数据。
达到最大容量后无法在图库中继续创建图片，否则将会报错。
MaxCapacity不支持修改，请合理评估容量上限，按需创建。
                     * @return MaxCapacity 图库可容纳的最大图片特征数量，一张图片对应一条图片特征数据。
达到最大容量后无法在图库中继续创建图片，否则将会报错。
MaxCapacity不支持修改，请合理评估容量上限，按需创建。
                     */
                    uint64_t GetMaxCapacity() const;

                    /**
                     * 设置图库可容纳的最大图片特征数量，一张图片对应一条图片特征数据。
达到最大容量后无法在图库中继续创建图片，否则将会报错。
MaxCapacity不支持修改，请合理评估容量上限，按需创建。
                     * @param MaxCapacity 图库可容纳的最大图片特征数量，一张图片对应一条图片特征数据。
达到最大容量后无法在图库中继续创建图片，否则将会报错。
MaxCapacity不支持修改，请合理评估容量上限，按需创建。
                     */
                    void SetMaxCapacity(const uint64_t& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     */
                    bool MaxCapacityHasBeenSet() const;

                    /**
                     * 获取图库简介。
                     * @return Brief 图库简介。
                     */
                    std::string GetBrief() const;

                    /**
                     * 设置图库简介。
                     * @param Brief 图库简介。
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
                     * 获取图库类型，用于决定图像搜索的服务类型和算法版本，默认为4。
GroupType不支持修改，若不确定适用的服务类型，建议先对不同类型分别小规模测试后再开始正式使用。
参数取值：
4：通用图像搜索1.0版。
7：商品图像搜索2.0升级版。
5：商品图像搜索1.0版。
6：图案花纹搜索1.0版。
1 - 3：通用图像搜索旧版，不推荐使用。
                     * @return GroupType 图库类型，用于决定图像搜索的服务类型和算法版本，默认为4。
GroupType不支持修改，若不确定适用的服务类型，建议先对不同类型分别小规模测试后再开始正式使用。
参数取值：
4：通用图像搜索1.0版。
7：商品图像搜索2.0升级版。
5：商品图像搜索1.0版。
6：图案花纹搜索1.0版。
1 - 3：通用图像搜索旧版，不推荐使用。
                     */
                    uint64_t GetGroupType() const;

                    /**
                     * 设置图库类型，用于决定图像搜索的服务类型和算法版本，默认为4。
GroupType不支持修改，若不确定适用的服务类型，建议先对不同类型分别小规模测试后再开始正式使用。
参数取值：
4：通用图像搜索1.0版。
7：商品图像搜索2.0升级版。
5：商品图像搜索1.0版。
6：图案花纹搜索1.0版。
1 - 3：通用图像搜索旧版，不推荐使用。
                     * @param GroupType 图库类型，用于决定图像搜索的服务类型和算法版本，默认为4。
GroupType不支持修改，若不确定适用的服务类型，建议先对不同类型分别小规模测试后再开始正式使用。
参数取值：
4：通用图像搜索1.0版。
7：商品图像搜索2.0升级版。
5：商品图像搜索1.0版。
6：图案花纹搜索1.0版。
1 - 3：通用图像搜索旧版，不推荐使用。
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
                     * 图库可容纳的最大图片特征数量，一张图片对应一条图片特征数据。
达到最大容量后无法在图库中继续创建图片，否则将会报错。
MaxCapacity不支持修改，请合理评估容量上限，按需创建。
                     */
                    uint64_t m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                    /**
                     * 图库简介。
                     */
                    std::string m_brief;
                    bool m_briefHasBeenSet;

                    /**
                     * 访问限制默认为10qps，如需扩容请联系[在线客服](https://cloud.tencent.com/online-service)申请。
                     */
                    uint64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 图库类型，用于决定图像搜索的服务类型和算法版本，默认为4。
GroupType不支持修改，若不确定适用的服务类型，建议先对不同类型分别小规模测试后再开始正式使用。
参数取值：
4：通用图像搜索1.0版。
7：商品图像搜索2.0升级版。
5：商品图像搜索1.0版。
6：图案花纹搜索1.0版。
1 - 3：通用图像搜索旧版，不推荐使用。
                     */
                    uint64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEGROUPREQUEST_H_
