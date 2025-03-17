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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEBLUEPRINT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEBLUEPRINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Blueprint.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述了镜像重置信息
                */
                class ResetInstanceBlueprint : public AbstractModel
                {
                public:
                    ResetInstanceBlueprint();
                    ~ResetInstanceBlueprint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像详细信息
                     * @return BlueprintInfo 镜像详细信息
                     * 
                     */
                    Blueprint GetBlueprintInfo() const;

                    /**
                     * 设置镜像详细信息
                     * @param _blueprintInfo 镜像详细信息
                     * 
                     */
                    void SetBlueprintInfo(const Blueprint& _blueprintInfo);

                    /**
                     * 判断参数 BlueprintInfo 是否已赋值
                     * @return BlueprintInfo 是否已赋值
                     * 
                     */
                    bool BlueprintInfoHasBeenSet() const;

                    /**
                     * 获取实例镜像是否可重置为目标镜像。
取值：
true（允许）
false（不允许）
                     * @return IsResettable 实例镜像是否可重置为目标镜像。
取值：
true（允许）
false（不允许）
                     * 
                     */
                    bool GetIsResettable() const;

                    /**
                     * 设置实例镜像是否可重置为目标镜像。
取值：
true（允许）
false（不允许）
                     * @param _isResettable 实例镜像是否可重置为目标镜像。
取值：
true（允许）
false（不允许）
                     * 
                     */
                    void SetIsResettable(const bool& _isResettable);

                    /**
                     * 判断参数 IsResettable 是否已赋值
                     * @return IsResettable 是否已赋值
                     * 
                     */
                    bool IsResettableHasBeenSet() const;

                    /**
                     * 获取不可重置信息.当镜像可重置时为""
                     * @return NonResettableMessage 不可重置信息.当镜像可重置时为""
                     * 
                     */
                    std::string GetNonResettableMessage() const;

                    /**
                     * 设置不可重置信息.当镜像可重置时为""
                     * @param _nonResettableMessage 不可重置信息.当镜像可重置时为""
                     * 
                     */
                    void SetNonResettableMessage(const std::string& _nonResettableMessage);

                    /**
                     * 判断参数 NonResettableMessage 是否已赋值
                     * @return NonResettableMessage 是否已赋值
                     * 
                     */
                    bool NonResettableMessageHasBeenSet() const;

                private:

                    /**
                     * 镜像详细信息
                     */
                    Blueprint m_blueprintInfo;
                    bool m_blueprintInfoHasBeenSet;

                    /**
                     * 实例镜像是否可重置为目标镜像。
取值：
true（允许）
false（不允许）
                     */
                    bool m_isResettable;
                    bool m_isResettableHasBeenSet;

                    /**
                     * 不可重置信息.当镜像可重置时为""
                     */
                    std::string m_nonResettableMessage;
                    bool m_nonResettableMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEBLUEPRINT_H_
