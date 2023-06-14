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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_REPORTGOODSBEHAVIORREQUEST_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_REPORTGOODSBEHAVIORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/GoodsBehaviorInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * ReportGoodsBehavior请求参数结构体
                */
                class ReportGoodsBehaviorRequest : public AbstractModel
                {
                public:
                    ReportGoodsBehaviorRequest();
                    ~ReportGoodsBehaviorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，在控制台获取
                     * @return InstanceId 实例ID，在控制台获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，在控制台获取
                     * @param _instanceId 实例ID，在控制台获取
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取上报的商品对应的用户行为数据数组，数量不超过50
                     * @return GoodsBehaviorList 上报的商品对应的用户行为数据数组，数量不超过50
                     * 
                     */
                    std::vector<GoodsBehaviorInfo> GetGoodsBehaviorList() const;

                    /**
                     * 设置上报的商品对应的用户行为数据数组，数量不超过50
                     * @param _goodsBehaviorList 上报的商品对应的用户行为数据数组，数量不超过50
                     * 
                     */
                    void SetGoodsBehaviorList(const std::vector<GoodsBehaviorInfo>& _goodsBehaviorList);

                    /**
                     * 判断参数 GoodsBehaviorList 是否已赋值
                     * @return GoodsBehaviorList 是否已赋值
                     * 
                     */
                    bool GoodsBehaviorListHasBeenSet() const;

                private:

                    /**
                     * 实例ID，在控制台获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 上报的商品对应的用户行为数据数组，数量不超过50
                     */
                    std::vector<GoodsBehaviorInfo> m_goodsBehaviorList;
                    bool m_goodsBehaviorListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_REPORTGOODSBEHAVIORREQUEST_H_
