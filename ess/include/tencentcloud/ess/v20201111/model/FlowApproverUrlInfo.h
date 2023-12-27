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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERURLINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署链接信息。
                */
                class FlowApproverUrlInfo : public AbstractModel
                {
                public:
                    FlowApproverUrlInfo();
                    ~FlowApproverUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署短链接。
注意:
1. 该链接有效期为<b>30分钟</b>，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return SignUrl 签署短链接。
注意:
1. 该链接有效期为<b>30分钟</b>，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 设置签署短链接。
注意:
1. 该链接有效期为<b>30分钟</b>，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @param _signUrl 签署短链接。
注意:
1. 该链接有效期为<b>30分钟</b>，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    void SetSignUrl(const std::string& _signUrl);

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     * 
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取签署人类型。
- **1**: 个人
                     * @return ApproverType 签署人类型。
- **1**: 个人
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置签署人类型。
- **1**: 个人
                     * @param _approverType 签署人类型。
- **1**: 个人
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取签署人姓名。
                     * @return ApproverName 签署人姓名。
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署人姓名。
                     * @param _approverName 签署人姓名。
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取签署人手机号。
                     * @return ApproverMobile 签署人手机号。
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置签署人手机号。
                     * @param _approverMobile 签署人手机号。
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取签署长链接。
注意:
1. 该链接有效期为**30分钟**，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持**移动端浏览器**打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return LongUrl 签署长链接。
注意:
1. 该链接有效期为**30分钟**，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持**移动端浏览器**打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetLongUrl() const;

                    /**
                     * 设置签署长链接。
注意:
1. 该链接有效期为**30分钟**，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持**移动端浏览器**打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @param _longUrl 签署长链接。
注意:
1. 该链接有效期为**30分钟**，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持**移动端浏览器**打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    void SetLongUrl(const std::string& _longUrl);

                    /**
                     * 判断参数 LongUrl 是否已赋值
                     * @return LongUrl 是否已赋值
                     * 
                     */
                    bool LongUrlHasBeenSet() const;

                private:

                    /**
                     * 签署短链接。
注意:
1. 该链接有效期为<b>30分钟</b>，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 签署人类型。
- **1**: 个人
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署人姓名。
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 签署人手机号。
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 签署长链接。
注意:
1. 该链接有效期为**30分钟**，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持**移动端浏览器**打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_longUrl;
                    bool m_longUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERURLINFO_H_
