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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLESHARINGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLESHARINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateConsoleSharing返回参数结构体
                */
                class CreateConsoleSharingResponse : public AbstractModel
                {
                public:
                    CreateConsoleSharingResponse();
                    ~CreateConsoleSharingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取免密分享链接
                     * @return SharingUrl 免密分享链接
                     * 
                     */
                    std::string GetSharingUrl() const;

                    /**
                     * 判断参数 SharingUrl 是否已赋值
                     * @return SharingUrl 是否已赋值
                     * 
                     */
                    bool SharingUrlHasBeenSet() const;

                    /**
                     * 获取免密分享链接ID
                     * @return SharingId 免密分享链接ID
                     * 
                     */
                    std::string GetSharingId() const;

                    /**
                     * 判断参数 SharingId 是否已赋值
                     * @return SharingId 是否已赋值
                     * 
                     */
                    bool SharingIdHasBeenSet() const;

                private:

                    /**
                     * 免密分享链接
                     */
                    std::string m_sharingUrl;
                    bool m_sharingUrlHasBeenSet;

                    /**
                     * 免密分享链接ID
                     */
                    std::string m_sharingId;
                    bool m_sharingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLESHARINGRESPONSE_H_
