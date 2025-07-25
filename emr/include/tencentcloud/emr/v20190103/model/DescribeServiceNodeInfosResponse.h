/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ServiceNodeDetailInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeServiceNodeInfos返回参数结构体
                */
                class DescribeServiceNodeInfosResponse : public AbstractModel
                {
                public:
                    DescribeServiceNodeInfosResponse();
                    ~DescribeServiceNodeInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return TotalCnt 总数量
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceNodeList 进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceNodeDetailInfo> GetServiceNodeList() const;

                    /**
                     * 判断参数 ServiceNodeList 是否已赋值
                     * @return ServiceNodeList 是否已赋值
                     * 
                     */
                    bool ServiceNodeListHasBeenSet() const;

                    /**
                     * 获取集群所有节点的别名序列化
                     * @return AliasInfo 集群所有节点的别名序列化
                     * 
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 判断参数 AliasInfo 是否已赋值
                     * @return AliasInfo 是否已赋值
                     * 
                     */
                    bool AliasInfoHasBeenSet() const;

                    /**
                     * 获取支持的FlagNode列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportNodeFlagFilterList 支持的FlagNode列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportNodeFlagFilterList() const;

                    /**
                     * 判断参数 SupportNodeFlagFilterList 是否已赋值
                     * @return SupportNodeFlagFilterList 是否已赋值
                     * 
                     */
                    bool SupportNodeFlagFilterListHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceNodeDetailInfo> m_serviceNodeList;
                    bool m_serviceNodeListHasBeenSet;

                    /**
                     * 集群所有节点的别名序列化
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * 支持的FlagNode列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportNodeFlagFilterList;
                    bool m_supportNodeFlagFilterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSRESPONSE_H_
