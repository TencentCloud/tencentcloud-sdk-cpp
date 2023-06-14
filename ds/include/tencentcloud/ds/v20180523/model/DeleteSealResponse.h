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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_DELETESEALRESPONSE_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_DELETESEALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * DeleteSeal返回参数结构体
                */
                class DeleteSealResponse : public AbstractModel
                {
                public:
                    DeleteSealResponse();
                    ~DeleteSealResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签章ID
                     * @return SealResId 签章ID
                     * 
                     */
                    std::string GetSealResId() const;

                    /**
                     * 判断参数 SealResId 是否已赋值
                     * @return SealResId 是否已赋值
                     * 
                     */
                    bool SealResIdHasBeenSet() const;

                private:

                    /**
                     * 签章ID
                     */
                    std::string m_sealResId;
                    bool m_sealResIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_DELETESEALRESPONSE_H_
