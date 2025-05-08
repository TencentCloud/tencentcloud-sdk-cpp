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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ALG协议类型
                */
                class AlgType : public AbstractModel
                {
                public:
                    AlgType();
                    ~AlgType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ftp协议Alg功能是否开启，可选值：
<li>true：开启Ftp协议Alg功能</li>
<li>false：不开启Ftp协议Alg功能</li>
                     * @return Ftp Ftp协议Alg功能是否开启，可选值：
<li>true：开启Ftp协议Alg功能</li>
<li>false：不开启Ftp协议Alg功能</li>
                     * 
                     */
                    bool GetFtp() const;

                    /**
                     * 设置Ftp协议Alg功能是否开启，可选值：
<li>true：开启Ftp协议Alg功能</li>
<li>false：不开启Ftp协议Alg功能</li>
                     * @param _ftp Ftp协议Alg功能是否开启，可选值：
<li>true：开启Ftp协议Alg功能</li>
<li>false：不开启Ftp协议Alg功能</li>
                     * 
                     */
                    void SetFtp(const bool& _ftp);

                    /**
                     * 判断参数 Ftp 是否已赋值
                     * @return Ftp 是否已赋值
                     * 
                     */
                    bool FtpHasBeenSet() const;

                    /**
                     * 获取Sip协议Alg功能是否开启，可选值：
<li>true：开启Sip协议Alg功能</li>
<li>false：不开启Sip协议Alg功能</li>
                     * @return Sip Sip协议Alg功能是否开启，可选值：
<li>true：开启Sip协议Alg功能</li>
<li>false：不开启Sip协议Alg功能</li>
                     * 
                     */
                    bool GetSip() const;

                    /**
                     * 设置Sip协议Alg功能是否开启，可选值：
<li>true：开启Sip协议Alg功能</li>
<li>false：不开启Sip协议Alg功能</li>
                     * @param _sip Sip协议Alg功能是否开启，可选值：
<li>true：开启Sip协议Alg功能</li>
<li>false：不开启Sip协议Alg功能</li>
                     * 
                     */
                    void SetSip(const bool& _sip);

                    /**
                     * 判断参数 Sip 是否已赋值
                     * @return Sip 是否已赋值
                     * 
                     */
                    bool SipHasBeenSet() const;

                private:

                    /**
                     * Ftp协议Alg功能是否开启，可选值：
<li>true：开启Ftp协议Alg功能</li>
<li>false：不开启Ftp协议Alg功能</li>
                     */
                    bool m_ftp;
                    bool m_ftpHasBeenSet;

                    /**
                     * Sip协议Alg功能是否开启，可选值：
<li>true：开启Sip协议Alg功能</li>
<li>false：不开启Sip协议Alg功能</li>
                     */
                    bool m_sip;
                    bool m_sipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_
