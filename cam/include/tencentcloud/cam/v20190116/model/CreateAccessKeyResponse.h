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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEACCESSKEYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEACCESSKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/AccessKeyDetail.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateAccessKey返回参数结构体
                */
                class CreateAccessKeyResponse : public AbstractModel
                {
                public:
                    CreateAccessKeyResponse();
                    ~CreateAccessKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey 访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessKeyDetail GetAccessKey() const;

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                private:

                    /**
                     * 访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessKeyDetail m_accessKey;
                    bool m_accessKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEACCESSKEYRESPONSE_H_
