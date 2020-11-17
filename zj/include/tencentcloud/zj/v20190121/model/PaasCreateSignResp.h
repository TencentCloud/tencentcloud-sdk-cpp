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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_PAASCREATESIGNRESP_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_PAASCREATESIGNRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 创建签名返回结构
                */
                class PaasCreateSignResp : public AbstractModel
                {
                public:
                    PaasCreateSignResp();
                    ~PaasCreateSignResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签名id
                     * @return SignId 签名id
                     */
                    int64_t GetSignId() const;

                    /**
                     * 设置签名id
                     * @param SignId 签名id
                     */
                    void SetSignId(const int64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     */
                    bool SignIdHasBeenSet() const;

                private:

                    /**
                     * 签名id
                     */
                    int64_t m_signId;
                    bool m_signIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_PAASCREATESIGNRESP_H_
