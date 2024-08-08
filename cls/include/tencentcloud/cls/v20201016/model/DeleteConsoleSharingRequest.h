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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONSOLESHARINGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONSOLESHARINGREQUEST_H_

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
                * DeleteConsoleSharing请求参数结构体
                */
                class DeleteConsoleSharingRequest : public AbstractModel
                {
                public:
                    DeleteConsoleSharingRequest();
                    ~DeleteConsoleSharingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取免密分享Id
                     * @return SharingId 免密分享Id
                     * 
                     */
                    std::string GetSharingId() const;

                    /**
                     * 设置免密分享Id
                     * @param _sharingId 免密分享Id
                     * 
                     */
                    void SetSharingId(const std::string& _sharingId);

                    /**
                     * 判断参数 SharingId 是否已赋值
                     * @return SharingId 是否已赋值
                     * 
                     */
                    bool SharingIdHasBeenSet() const;

                private:

                    /**
                     * 免密分享Id
                     */
                    std::string m_sharingId;
                    bool m_sharingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONSOLESHARINGREQUEST_H_
