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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 拨测任务状态信息
                */
                class SpeedTestingStatus : public AbstractModel
                {
                public:
                    SpeedTestingStatus();
                    ~SpeedTestingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拨测 url。
                     * @return Url 拨测 url。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置拨测 url。
                     * @param Url 拨测 url。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取拨测 url 是否使用 https。
                     * @return Tls 拨测 url 是否使用 https。
                     */
                    bool GetTls() const;

                    /**
                     * 设置拨测 url 是否使用 https。
                     * @param Tls 拨测 url 是否使用 https。
                     */
                    void SetTls(const bool& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取任务创建时间。
                     * @return CreatedOn 任务创建时间。
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置任务创建时间。
                     * @param CreatedOn 任务创建时间。
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中。</li>
<li> 503: 任务失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCode 任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中。</li>
<li> 503: 任务失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中。</li>
<li> 503: 任务失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusCode 任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中。</li>
<li> 503: 任务失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取拨测 UA。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UA 拨测 UA。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUA() const;

                    /**
                     * 设置拨测 UA。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UA 拨测 UA。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUA(const std::string& _uA);

                    /**
                     * 判断参数 UA 是否已赋值
                     * @return UA 是否已赋值
                     */
                    bool UAHasBeenSet() const;

                    /**
                     * 获取网络环境。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Connectivity 网络环境。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConnectivity() const;

                    /**
                     * 设置网络环境。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Connectivity 网络环境。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConnectivity(const std::string& _connectivity);

                    /**
                     * 判断参数 Connectivity 是否已赋值
                     * @return Connectivity 是否已赋值
                     */
                    bool ConnectivityHasBeenSet() const;

                    /**
                     * 获取是否可达，取值：
<li> true：可达；</li>
<li> false：不可达。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reachable 是否可达，取值：
<li> true：可达；</li>
<li> false：不可达。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetReachable() const;

                    /**
                     * 设置是否可达，取值：
<li> true：可达；</li>
<li> false：不可达。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Reachable 是否可达，取值：
<li> true：可达；</li>
<li> false：不可达。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReachable(const bool& _reachable);

                    /**
                     * 判断参数 Reachable 是否已赋值
                     * @return Reachable 是否已赋值
                     */
                    bool ReachableHasBeenSet() const;

                    /**
                     * 获取是否超时，取值：
<li> true：超时；</li>
<li> false：不超时。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimedOut 是否超时，取值：
<li> true：超时；</li>
<li> false：不超时。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTimedOut() const;

                    /**
                     * 设置是否超时，取值：
<li> true：超时；</li>
<li> false：不超时。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimedOut 是否超时，取值：
<li> true：超时；</li>
<li> false：不超时。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimedOut(const bool& _timedOut);

                    /**
                     * 判断参数 TimedOut 是否已赋值
                     * @return TimedOut 是否已赋值
                     */
                    bool TimedOutHasBeenSet() const;

                private:

                    /**
                     * 拨测 url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 拨测 url 是否使用 https。
                     */
                    bool m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中。</li>
<li> 503: 任务失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 拨测 UA。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uA;
                    bool m_uAHasBeenSet;

                    /**
                     * 网络环境。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectivity;
                    bool m_connectivityHasBeenSet;

                    /**
                     * 是否可达，取值：
<li> true：可达；</li>
<li> false：不可达。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_reachable;
                    bool m_reachableHasBeenSet;

                    /**
                     * 是否超时，取值：
<li> true：超时；</li>
<li> false：不超时。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_timedOut;
                    bool m_timedOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGSTATUS_H_
