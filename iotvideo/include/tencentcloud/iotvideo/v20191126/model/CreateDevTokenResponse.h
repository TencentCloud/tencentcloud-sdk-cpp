/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVTOKENRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/DevTokenInfo.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateDevToken返回参数结构体
                */
                class CreateDevTokenResponse : public AbstractModel
                {
                public:
                    CreateDevTokenResponse();
                    ~CreateDevTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的用户token列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 返回的用户token列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DevTokenInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 返回的用户token列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DevTokenInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEDEVTOKENRESPONSE_H_
