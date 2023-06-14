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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEAPPUSRRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEAPPUSRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateAppUsr返回参数结构体
                */
                class CreateAppUsrResponse : public AbstractModel
                {
                public:
                    CreateAppUsrResponse();
                    ~CreateAppUsrResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取厂商云标识用户的唯一ID
                     * @return CunionId 厂商云标识用户的唯一ID
                     * 
                     */
                    std::string GetCunionId() const;

                    /**
                     * 判断参数 CunionId 是否已赋值
                     * @return CunionId 是否已赋值
                     * 
                     */
                    bool CunionIdHasBeenSet() const;

                    /**
                     * 获取客户的终端用户在IoT Video上的唯一标识ID
                     * @return AccessId 客户的终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取用户是否为新创建
                     * @return NewRegist 用户是否为新创建
                     * 
                     */
                    bool GetNewRegist() const;

                    /**
                     * 判断参数 NewRegist 是否已赋值
                     * @return NewRegist 是否已赋值
                     * 
                     */
                    bool NewRegistHasBeenSet() const;

                private:

                    /**
                     * 厂商云标识用户的唯一ID
                     */
                    std::string m_cunionId;
                    bool m_cunionIdHasBeenSet;

                    /**
                     * 客户的终端用户在IoT Video上的唯一标识ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 用户是否为新创建
                     */
                    bool m_newRegist;
                    bool m_newRegistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEAPPUSRRESPONSE_H_
