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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyCensorship返回参数结构体
                */
                class ModifyCensorshipResponse : public AbstractModel
                {
                public:
                    ModifyCensorshipResponse();
                    ~ModifyCensorshipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取已加入审批人的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uins 已加入审批人的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUins() const;

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     * 
                     */
                    bool UinsHasBeenSet() const;

                    /**
                     * 获取集群是否开启审核 0-关闭 1-开启
                     * @return Censorship 集群是否开启审核 0-关闭 1-开启
                     * 
                     */
                    int64_t GetCensorship() const;

                    /**
                     * 判断参数 Censorship 是否已赋值
                     * @return Censorship 是否已赋值
                     * 
                     */
                    bool CensorshipHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 已加入审批人的uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_uins;
                    bool m_uinsHasBeenSet;

                    /**
                     * 集群是否开启审核 0-关闭 1-开启
                     */
                    int64_t m_censorship;
                    bool m_censorshipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPRESPONSE_H_
