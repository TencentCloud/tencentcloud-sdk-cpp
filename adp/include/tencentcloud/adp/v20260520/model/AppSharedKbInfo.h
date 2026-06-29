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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREDKBINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREDKBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用引用的共享知识库简要信息(查询时仅返回ID和名称)
                */
                class AppSharedKbInfo : public AbstractModel
                {
                public:
                    AppSharedKbInfo();
                    ~AppSharedKbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享知识库ID
                     * @return KbId 共享知识库ID
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置共享知识库ID
                     * @param _kbId 共享知识库ID
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取共享知识库名称
                     * @return KbName 共享知识库名称
                     * 
                     */
                    std::string GetKbName() const;

                    /**
                     * 设置共享知识库名称
                     * @param _kbName 共享知识库名称
                     * 
                     */
                    void SetKbName(const std::string& _kbName);

                    /**
                     * 判断参数 KbName 是否已赋值
                     * @return KbName 是否已赋值
                     * 
                     */
                    bool KbNameHasBeenSet() const;

                private:

                    /**
                     * 共享知识库ID
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * 共享知识库名称
                     */
                    std::string m_kbName;
                    bool m_kbNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREDKBINFO_H_
