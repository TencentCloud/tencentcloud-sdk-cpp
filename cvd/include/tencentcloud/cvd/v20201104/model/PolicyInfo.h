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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_POLICYINFO_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_POLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 创建策略详细信息
                */
                class PolicyInfo : public AbstractModel
                {
                public:
                    PolicyInfo();
                    ~PolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略类型。取值：
1：文件重定向策略
2：剪切板重定向策略
3：外设重定向策略
4：水印策略
                     * @return PolicyType 策略类型。取值：
1：文件重定向策略
2：剪切板重定向策略
3：外设重定向策略
4：水印策略
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置策略类型。取值：
1：文件重定向策略
2：剪切板重定向策略
3：外设重定向策略
4：水印策略
                     * @param _policyType 策略类型。取值：
1：文件重定向策略
2：剪切板重定向策略
3：外设重定向策略
4：水印策略
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略值。取值：
PolicyType对应个子取值范围：
	①：PolicyType为1-文件重定向策略	
					1：读写
					2：只读
					3：禁止读写
	②：剪切板重定向策略
					1：开启云桌面到客户端
					2：开启客户端到云桌面
					3：双向开启
					4：禁用
	③：外设重定向策略
					1：允许usb重定向
					2：允许端口重定向
					3：允许usb和端口重定向
					4：禁用
	④：水印策略
					4:   当前时间，居中策略
					10: 当前时间，平铺策略
					15:  云桌面ID， 居中策略
                                        16:  云桌面ID+当前时间， 居中策略
                                        17:  云桌面ID， 平铺策略
                                        18:  云桌面ID+当前时间， 平铺策略
                     * @return PolicyValue 策略值。取值：
PolicyType对应个子取值范围：
	①：PolicyType为1-文件重定向策略	
					1：读写
					2：只读
					3：禁止读写
	②：剪切板重定向策略
					1：开启云桌面到客户端
					2：开启客户端到云桌面
					3：双向开启
					4：禁用
	③：外设重定向策略
					1：允许usb重定向
					2：允许端口重定向
					3：允许usb和端口重定向
					4：禁用
	④：水印策略
					4:   当前时间，居中策略
					10: 当前时间，平铺策略
					15:  云桌面ID， 居中策略
                                        16:  云桌面ID+当前时间， 居中策略
                                        17:  云桌面ID， 平铺策略
                                        18:  云桌面ID+当前时间， 平铺策略
                     * 
                     */
                    int64_t GetPolicyValue() const;

                    /**
                     * 设置策略值。取值：
PolicyType对应个子取值范围：
	①：PolicyType为1-文件重定向策略	
					1：读写
					2：只读
					3：禁止读写
	②：剪切板重定向策略
					1：开启云桌面到客户端
					2：开启客户端到云桌面
					3：双向开启
					4：禁用
	③：外设重定向策略
					1：允许usb重定向
					2：允许端口重定向
					3：允许usb和端口重定向
					4：禁用
	④：水印策略
					4:   当前时间，居中策略
					10: 当前时间，平铺策略
					15:  云桌面ID， 居中策略
                                        16:  云桌面ID+当前时间， 居中策略
                                        17:  云桌面ID， 平铺策略
                                        18:  云桌面ID+当前时间， 平铺策略
                     * @param _policyValue 策略值。取值：
PolicyType对应个子取值范围：
	①：PolicyType为1-文件重定向策略	
					1：读写
					2：只读
					3：禁止读写
	②：剪切板重定向策略
					1：开启云桌面到客户端
					2：开启客户端到云桌面
					3：双向开启
					4：禁用
	③：外设重定向策略
					1：允许usb重定向
					2：允许端口重定向
					3：允许usb和端口重定向
					4：禁用
	④：水印策略
					4:   当前时间，居中策略
					10: 当前时间，平铺策略
					15:  云桌面ID， 居中策略
                                        16:  云桌面ID+当前时间， 居中策略
                                        17:  云桌面ID， 平铺策略
                                        18:  云桌面ID+当前时间， 平铺策略
                     * 
                     */
                    void SetPolicyValue(const int64_t& _policyValue);

                    /**
                     * 判断参数 PolicyValue 是否已赋值
                     * @return PolicyValue 是否已赋值
                     * 
                     */
                    bool PolicyValueHasBeenSet() const;

                private:

                    /**
                     * 策略类型。取值：
1：文件重定向策略
2：剪切板重定向策略
3：外设重定向策略
4：水印策略
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略值。取值：
PolicyType对应个子取值范围：
	①：PolicyType为1-文件重定向策略	
					1：读写
					2：只读
					3：禁止读写
	②：剪切板重定向策略
					1：开启云桌面到客户端
					2：开启客户端到云桌面
					3：双向开启
					4：禁用
	③：外设重定向策略
					1：允许usb重定向
					2：允许端口重定向
					3：允许usb和端口重定向
					4：禁用
	④：水印策略
					4:   当前时间，居中策略
					10: 当前时间，平铺策略
					15:  云桌面ID， 居中策略
                                        16:  云桌面ID+当前时间， 居中策略
                                        17:  云桌面ID， 平铺策略
                                        18:  云桌面ID+当前时间， 平铺策略
                     */
                    int64_t m_policyValue;
                    bool m_policyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_POLICYINFO_H_
