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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_RUNFAILOVERCOPYPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_RUNFAILOVERCOPYPAIRSREQUEST_H_

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
                * RunFailoverCopyPairs请求参数结构体
                */
                class RunFailoverCopyPairsRequest : public AbstractModel
                {
                public:
                    RunFailoverCopyPairsRequest();
                    ~RunFailoverCopyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>复制对ID列表</p>
                     * @return CopyPairIds <p>复制对ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetCopyPairIds() const;

                    /**
                     * 设置<p>复制对ID列表</p>
                     * @param _copyPairIds <p>复制对ID列表</p>
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
                     * 获取<p>复制对类型，枚举值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * @return CopyPairType <p>复制对类型，枚举值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置<p>复制对类型，枚举值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * @param _copyPairType <p>复制对类型，枚举值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                    /**
                     * 获取<p>切换类型，支持WAIT和NOW</p>
                     * @return FailoverType <p>切换类型，支持WAIT和NOW</p>
                     * 
                     */
                    std::string GetFailoverType() const;

                    /**
                     * 设置<p>切换类型，支持WAIT和NOW</p>
                     * @param _failoverType <p>切换类型，支持WAIT和NOW</p>
                     * 
                     */
                    void SetFailoverType(const std::string& _failoverType);

                    /**
                     * 判断参数 FailoverType 是否已赋值
                     * @return FailoverType 是否已赋值
                     * 
                     */
                    bool FailoverTypeHasBeenSet() const;

                    /**
                     * 获取<p>故障切换成功后是否自动关机生产端实例，默认为true</p>
                     * @return StopSourceInstance <p>故障切换成功后是否自动关机生产端实例，默认为true</p>
                     * 
                     */
                    bool GetStopSourceInstance() const;

                    /**
                     * 设置<p>故障切换成功后是否自动关机生产端实例，默认为true</p>
                     * @param _stopSourceInstance <p>故障切换成功后是否自动关机生产端实例，默认为true</p>
                     * 
                     */
                    void SetStopSourceInstance(const bool& _stopSourceInstance);

                    /**
                     * 判断参数 StopSourceInstance 是否已赋值
                     * @return StopSourceInstance 是否已赋值
                     * 
                     */
                    bool StopSourceInstanceHasBeenSet() const;

                private:

                    /**
                     * <p>复制对ID列表</p>
                     */
                    std::vector<std::string> m_copyPairIds;
                    bool m_copyPairIdsHasBeenSet;

                    /**
                     * <p>复制对类型，枚举值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                    /**
                     * <p>切换类型，支持WAIT和NOW</p>
                     */
                    std::string m_failoverType;
                    bool m_failoverTypeHasBeenSet;

                    /**
                     * <p>故障切换成功后是否自动关机生产端实例，默认为true</p>
                     */
                    bool m_stopSourceInstance;
                    bool m_stopSourceInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RUNFAILOVERCOPYPAIRSREQUEST_H_
