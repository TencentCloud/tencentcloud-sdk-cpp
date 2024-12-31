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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ZONEDETAILPRICERESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ZONEDETAILPRICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeDetailPriceResult.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用于创建集群价格清单 不同可用区下价格详情
                */
                class ZoneDetailPriceResult : public AbstractModel
                {
                public:
                    ZoneDetailPriceResult();
                    ~ZoneDetailPriceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区Id
                     * @return ZoneId 可用区Id
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区Id
                     * @param _zoneId 可用区Id
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取不同节点的价格详情
                     * @return NodeDetailPrice 不同节点的价格详情
                     * 
                     */
                    std::vector<NodeDetailPriceResult> GetNodeDetailPrice() const;

                    /**
                     * 设置不同节点的价格详情
                     * @param _nodeDetailPrice 不同节点的价格详情
                     * 
                     */
                    void SetNodeDetailPrice(const std::vector<NodeDetailPriceResult>& _nodeDetailPrice);

                    /**
                     * 判断参数 NodeDetailPrice 是否已赋值
                     * @return NodeDetailPrice 是否已赋值
                     * 
                     */
                    bool NodeDetailPriceHasBeenSet() const;

                private:

                    /**
                     * 可用区Id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 不同节点的价格详情
                     */
                    std::vector<NodeDetailPriceResult> m_nodeDetailPrice;
                    bool m_nodeDetailPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ZONEDETAILPRICERESULT_H_
