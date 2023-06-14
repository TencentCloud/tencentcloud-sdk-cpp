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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OPTIMIZEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OPTIMIZEACTION_H_

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
                * 站点拨测优化建议
                */
                class OptimizeAction : public AbstractModel
                {
                public:
                    OptimizeAction();
                    ~OptimizeAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点性能优化配置项，取值有：
<li>Http2；</li>
<li>Http3；</li>
<li>Brotli。</li>
                     * @return Name 站点性能优化配置项，取值有：
<li>Http2；</li>
<li>Http3；</li>
<li>Brotli。</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置站点性能优化配置项，取值有：
<li>Http2；</li>
<li>Http3；</li>
<li>Brotli。</li>
                     * @param _name 站点性能优化配置项，取值有：
<li>Http2；</li>
<li>Http3；</li>
<li>Brotli。</li>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取网络环境。
                     * @return Connectivity 网络环境。
                     * 
                     */
                    std::string GetConnectivity() const;

                    /**
                     * 设置网络环境。
                     * @param _connectivity 网络环境。
                     * 
                     */
                    void SetConnectivity(const std::string& _connectivity);

                    /**
                     * 判断参数 Connectivity 是否已赋值
                     * @return Connectivity 是否已赋值
                     * 
                     */
                    bool ConnectivityHasBeenSet() const;

                    /**
                     * 获取开启配置项后，预估性能优化效果，单位ms。
                     * @return Value 开启配置项后，预估性能优化效果，单位ms。
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置开启配置项后，预估性能优化效果，单位ms。
                     * @param _value 开启配置项后，预估性能优化效果，单位ms。
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取开启配置项后，预估性能提升比例，单位%。
                     * @return Ratio 开启配置项后，预估性能提升比例，单位%。
                     * 
                     */
                    int64_t GetRatio() const;

                    /**
                     * 设置开启配置项后，预估性能提升比例，单位%。
                     * @param _ratio 开启配置项后，预估性能提升比例，单位%。
                     * 
                     */
                    void SetRatio(const int64_t& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * 站点性能优化配置项，取值有：
<li>Http2；</li>
<li>Http3；</li>
<li>Brotli。</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网络环境。
                     */
                    std::string m_connectivity;
                    bool m_connectivityHasBeenSet;

                    /**
                     * 开启配置项后，预估性能优化效果，单位ms。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 开启配置项后，预估性能提升比例，单位%。
                     */
                    int64_t m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OPTIMIZEACTION_H_
