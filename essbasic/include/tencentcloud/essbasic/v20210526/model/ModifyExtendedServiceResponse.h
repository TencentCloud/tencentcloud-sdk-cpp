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
                     * 获取操作跳转链接，有效期24小时
若操作时没有返回跳转链接，表示无需跳转操作，此时会直接开通/关闭服务。

当操作类型是 OPEN 且 扩展服务类型是 AUTO_SIGN 或 DOWNLOAD_FLOW 或者 OVERSEA_SIGN 时返回操作链接，
返回的链接需要平台方自行触达超管或法人，超管或法人点击链接完成服务开通操作
                     * @return OperateUrl 操作跳转链接，有效期24小时
若操作时没有返回跳转链接，表示无需跳转操作，此时会直接开通/关闭服务。

当操作类型是 OPEN 且 扩展服务类型是 AUTO_SIGN 或 DOWNLOAD_FLOW 或者 OVERSEA_SIGN 时返回操作链接，
返回的链接需要平台方自行触达超管或法人，超管或法人点击链接完成服务开通操作
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
                     * 操作跳转链接，有效期24小时
若操作时没有返回跳转链接，表示无需跳转操作，此时会直接开通/关闭服务。

当操作类型是 OPEN 且 扩展服务类型是 AUTO_SIGN 或 DOWNLOAD_FLOW 或者 OVERSEA_SIGN 时返回操作链接，
返回的链接需要平台方自行触达超管或法人，超管或法人点击链接完成服务开通操作
                     */
                    std::string m_operateUrl;
                    bool m_operateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_
