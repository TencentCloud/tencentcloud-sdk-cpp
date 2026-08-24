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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_FINISHFAILOVERCOPYPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_FINISHFAILOVERCOPYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * FinishFailoverCopyPairs请求参数结构体
                */
                class FinishFailoverCopyPairsRequest : public AbstractModel
                {
                public:
                    FinishFailoverCopyPairsRequest();
                    ~FinishFailoverCopyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>复制对ID列表。长度范围 [1, 50]。当 CopyPairType=INSTANCE 时传 CVM 复制对ID，否则传云盘/CFS 复制对ID。</p>
                     * @return CopyPairIds <p>复制对ID列表。长度范围 [1, 50]。当 CopyPairType=INSTANCE 时传 CVM 复制对ID，否则传云盘/CFS 复制对ID。</p>
                     * 
                     */
                    std::vector<std::string> GetCopyPairIds() const;

                    /**
                     * 设置<p>复制对ID列表。长度范围 [1, 50]。当 CopyPairType=INSTANCE 时传 CVM 复制对ID，否则传云盘/CFS 复制对ID。</p>
                     * @param _copyPairIds <p>复制对ID列表。长度范围 [1, 50]。当 CopyPairType=INSTANCE 时传 CVM 复制对ID，否则传云盘/CFS 复制对ID。</p>
                     * 
                     */
                    void SetCopyPairIds(const std::vector<std::string>& _copyPairIds);

                    /**
                     * 判断参数 CopyPairIds 是否已赋值
                     * @return CopyPairIds 是否已赋值
                     * 
                     */
                    bool CopyPairIdsHasBeenSet() const;

                    /**
                     * 获取<p>要完成切换的复制对类型。枚举值：DISK / INSTANCE / CFS。</p>
                     * @return CopyPairType <p>要完成切换的复制对类型。枚举值：DISK / INSTANCE / CFS。</p>
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置<p>要完成切换的复制对类型。枚举值：DISK / INSTANCE / CFS。</p>
                     * @param _copyPairType <p>要完成切换的复制对类型。枚举值：DISK / INSTANCE / CFS。</p>
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                private:

                    /**
                     * <p>复制对ID列表。长度范围 [1, 50]。当 CopyPairType=INSTANCE 时传 CVM 复制对ID，否则传云盘/CFS 复制对ID。</p>
                     */
                    std::vector<std::string> m_copyPairIds;
                    bool m_copyPairIdsHasBeenSet;

                    /**
                     * <p>要完成切换的复制对类型。枚举值：DISK / INSTANCE / CFS。</p>
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_FINISHFAILOVERCOPYPAIRSREQUEST_H_
