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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONECNAMESPEEDUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONECNAMESPEEDUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyZoneCnameSpeedUp请求参数结构体
                */
                class ModifyZoneCnameSpeedUpRequest : public AbstractModel
                {
                public:
                    ModifyZoneCnameSpeedUpRequest();
                    ~ModifyZoneCnameSpeedUpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return Id 站点 ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置站点 ID
                     * @param Id 站点 ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CNAME 加速状态
- enabled 开启
- disabled 关闭
                     * @return Status CNAME 加速状态
- enabled 开启
- disabled 关闭
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CNAME 加速状态
- enabled 开启
- disabled 关闭
                     * @param Status CNAME 加速状态
- enabled 开启
- disabled 关闭
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CNAME 加速状态
- enabled 开启
- disabled 关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONECNAMESPEEDUPREQUEST_H_
