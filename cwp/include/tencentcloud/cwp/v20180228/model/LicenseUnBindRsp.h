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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEUNBINDRSP_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEUNBINDRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 授权解绑信息
                */
                class LicenseUnBindRsp : public AbstractModel
                {
                public:
                    LicenseUnBindRsp();
                    ~LicenseUnBindRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取QUUID 云服务器uuid,轻量服务器uuid,边缘计算 uuid
                     * @return Quuid QUUID 云服务器uuid,轻量服务器uuid,边缘计算 uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置QUUID 云服务器uuid,轻量服务器uuid,边缘计算 uuid
                     * @param _quuid QUUID 云服务器uuid,轻量服务器uuid,边缘计算 uuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return ErrMsg 失败原因
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置失败原因
                     * @param _errMsg 失败原因
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * QUUID 云服务器uuid,轻量服务器uuid,边缘计算 uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEUNBINDRSP_H_
