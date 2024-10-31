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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ModifyExtendedService返回参数结构体
                */
                class ModifyExtendedServiceResponse : public AbstractModel
                {
                public:
                    ModifyExtendedServiceResponse();
                    ~ModifyExtendedServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作跳转链接
<ul><li><strong>链接有效期：</strong> 跳转链接的有效期为24小时。</li>
<li><strong>没有返回链接的情形：</strong> 如果在操作时没有返回跳转链接，说明此次操作无需进行跳转，服务将会直接被开通或关闭。</li>
<li><strong>返回链接的情形：</strong> 当操作类型为<b>OPEN（开通服务）</b>，并且扩展服务类型为<b>AUTO_SIGN（ 企业自动签署）</b>、<b>DOWNLOAD_FLOW（授权渠道下载合同）</b>时，系统将返回一个操作链接。收到操作链接后，贵方需主动联系超级管理员（超管）或法人。<font color="red"><b>由超管或法人点击链接</b></font>，以完成服务的开通操作。</li>
</ul>


                     * @return OperateUrl 操作跳转链接
<ul><li><strong>链接有效期：</strong> 跳转链接的有效期为24小时。</li>
<li><strong>没有返回链接的情形：</strong> 如果在操作时没有返回跳转链接，说明此次操作无需进行跳转，服务将会直接被开通或关闭。</li>
<li><strong>返回链接的情形：</strong> 当操作类型为<b>OPEN（开通服务）</b>，并且扩展服务类型为<b>AUTO_SIGN（ 企业自动签署）</b>、<b>DOWNLOAD_FLOW（授权渠道下载合同）</b>时，系统将返回一个操作链接。收到操作链接后，贵方需主动联系超级管理员（超管）或法人。<font color="red"><b>由超管或法人点击链接</b></font>，以完成服务的开通操作。</li>
</ul>


                     * 
                     */
                    std::string GetOperateUrl() const;

                    /**
                     * 判断参数 OperateUrl 是否已赋值
                     * @return OperateUrl 是否已赋值
                     * 
                     */
                    bool OperateUrlHasBeenSet() const;

                private:

                    /**
                     * 操作跳转链接
<ul><li><strong>链接有效期：</strong> 跳转链接的有效期为24小时。</li>
<li><strong>没有返回链接的情形：</strong> 如果在操作时没有返回跳转链接，说明此次操作无需进行跳转，服务将会直接被开通或关闭。</li>
<li><strong>返回链接的情形：</strong> 当操作类型为<b>OPEN（开通服务）</b>，并且扩展服务类型为<b>AUTO_SIGN（ 企业自动签署）</b>、<b>DOWNLOAD_FLOW（授权渠道下载合同）</b>时，系统将返回一个操作链接。收到操作链接后，贵方需主动联系超级管理员（超管）或法人。<font color="red"><b>由超管或法人点击链接</b></font>，以完成服务的开通操作。</li>
</ul>


                     */
                    std::string m_operateUrl;
                    bool m_operateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_
