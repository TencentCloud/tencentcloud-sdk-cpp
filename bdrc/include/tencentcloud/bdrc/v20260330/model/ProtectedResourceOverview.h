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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCEOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ResourceProtectStat.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 受保护资源概览
                */
                class ProtectedResourceOverview : public AbstractModel
                {
                public:
                    ProtectedResourceOverview();
                    ~ProtectedResourceOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>受保护资源总数</p>
                     * @return TotalProtectedCount <p>受保护资源总数</p>
                     * 
                     */
                    int64_t GetTotalProtectedCount() const;

                    /**
                     * 设置<p>受保护资源总数</p>
                     * @param _totalProtectedCount <p>受保护资源总数</p>
                     * 
                     */
                    void SetTotalProtectedCount(const int64_t& _totalProtectedCount);

                    /**
                     * 判断参数 TotalProtectedCount 是否已赋值
                     * @return TotalProtectedCount 是否已赋值
                     * 
                     */
                    bool TotalProtectedCountHasBeenSet() const;

                    /**
                     * 获取<p>总资源数</p>
                     * @return TotalResourceCount <p>总资源数</p>
                     * 
                     */
                    int64_t GetTotalResourceCount() const;

                    /**
                     * 设置<p>总资源数</p>
                     * @param _totalResourceCount <p>总资源数</p>
                     * 
                     */
                    void SetTotalResourceCount(const int64_t& _totalResourceCount);

                    /**
                     * 判断参数 TotalResourceCount 是否已赋值
                     * @return TotalResourceCount 是否已赋值
                     * 
                     */
                    bool TotalResourceCountHasBeenSet() const;

                    /**
                     * 获取<p>CVM整机备份受保护统计</p>
                     * @return Cvm <p>CVM整机备份受保护统计</p>
                     * 
                     */
                    ResourceProtectStat GetCvm() const;

                    /**
                     * 设置<p>CVM整机备份受保护统计</p>
                     * @param _cvm <p>CVM整机备份受保护统计</p>
                     * 
                     */
                    void SetCvm(const ResourceProtectStat& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     * 
                     */
                    bool CvmHasBeenSet() const;

                    /**
                     * 获取<p>CVM文件备份受保护统计</p>
                     * @return CFS <p>CVM文件备份受保护统计</p>
                     * 
                     */
                    ResourceProtectStat GetCFS() const;

                    /**
                     * 设置<p>CVM文件备份受保护统计</p>
                     * @param _cFS <p>CVM文件备份受保护统计</p>
                     * 
                     */
                    void SetCFS(const ResourceProtectStat& _cFS);

                    /**
                     * 判断参数 CFS 是否已赋值
                     * @return CFS 是否已赋值
                     * 
                     */
                    bool CFSHasBeenSet() const;

                    /**
                     * 获取<p>CFS文件备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSAgent <p>CFS文件备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceProtectStat GetCFSAgent() const;

                    /**
                     * 设置<p>CFS文件备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSAgent <p>CFS文件备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFSAgent(const ResourceProtectStat& _cFSAgent);

                    /**
                     * 判断参数 CFSAgent 是否已赋值
                     * @return CFSAgent 是否已赋值
                     * 
                     */
                    bool CFSAgentHasBeenSet() const;

                    /**
                     * 获取<p>COS备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSAgent <p>COS备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceProtectStat GetCOSAgent() const;

                    /**
                     * 设置<p>COS备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cOSAgent <p>COS备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCOSAgent(const ResourceProtectStat& _cOSAgent);

                    /**
                     * 判断参数 COSAgent 是否已赋值
                     * @return COSAgent 是否已赋值
                     * 
                     */
                    bool COSAgentHasBeenSet() const;

                private:

                    /**
                     * <p>受保护资源总数</p>
                     */
                    int64_t m_totalProtectedCount;
                    bool m_totalProtectedCountHasBeenSet;

                    /**
                     * <p>总资源数</p>
                     */
                    int64_t m_totalResourceCount;
                    bool m_totalResourceCountHasBeenSet;

                    /**
                     * <p>CVM整机备份受保护统计</p>
                     */
                    ResourceProtectStat m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * <p>CVM文件备份受保护统计</p>
                     */
                    ResourceProtectStat m_cFS;
                    bool m_cFSHasBeenSet;

                    /**
                     * <p>CFS文件备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceProtectStat m_cFSAgent;
                    bool m_cFSAgentHasBeenSet;

                    /**
                     * <p>COS备份受保护统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceProtectStat m_cOSAgent;
                    bool m_cOSAgentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCEOVERVIEW_H_
