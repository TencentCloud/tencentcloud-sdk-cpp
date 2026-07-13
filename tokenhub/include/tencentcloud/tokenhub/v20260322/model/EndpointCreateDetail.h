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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_ENDPOINTCREATEDETAIL_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_ENDPOINTCREATEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 创建推理服务返回的详情信息
                */
                class EndpointCreateDetail : public AbstractModel
                {
                public:
                    EndpointCreateDetail();
                    ~EndpointCreateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预付费包 id
                     * @return PreResourceId 预付费包 id
                     * 
                     */
                    std::string GetPreResourceId() const;

                    /**
                     * 设置预付费包 id
                     * @param _preResourceId 预付费包 id
                     * 
                     */
                    void SetPreResourceId(const std::string& _preResourceId);

                    /**
                     * 判断参数 PreResourceId 是否已赋值
                     * @return PreResourceId 是否已赋值
                     * 
                     */
                    bool PreResourceIdHasBeenSet() const;

                private:

                    /**
                     * 预付费包 id
                     */
                    std::string m_preResourceId;
                    bool m_preResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_ENDPOINTCREATEDETAIL_H_
