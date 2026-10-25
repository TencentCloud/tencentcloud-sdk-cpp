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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEMODELVERSIONRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEMODELVERSIONRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 创建模型版本返回
                */
                class CreateModelVersionRsp : public AbstractModel
                {
                public:
                    CreateModelVersionRsp();
                    ~CreateModelVersionRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建成功
                     * @return Created 创建成功
                     * 
                     */
                    bool GetCreated() const;

                    /**
                     * 设置创建成功
                     * @param _created 创建成功
                     * 
                     */
                    void SetCreated(const bool& _created);

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                private:

                    /**
                     * 创建成功
                     */
                    bool m_created;
                    bool m_createdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEMODELVERSIONRSP_H_
