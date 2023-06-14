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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_RECORDREPLAYPROJECTINPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_RECORDREPLAYPROJECTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 录制回放项目输入信息。
                */
                class RecordReplayProjectInput : public AbstractModel
                {
                public:
                    RecordReplayProjectInput();
                    ~RecordReplayProjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制拉流地址。
                     * @return PullStreamUrl 录制拉流地址。
                     * 
                     */
                    std::string GetPullStreamUrl() const;

                    /**
                     * 设置录制拉流地址。
                     * @param _pullStreamUrl 录制拉流地址。
                     * 
                     */
                    void SetPullStreamUrl(const std::string& _pullStreamUrl);

                    /**
                     * 判断参数 PullStreamUrl 是否已赋值
                     * @return PullStreamUrl 是否已赋值
                     * 
                     */
                    bool PullStreamUrlHasBeenSet() const;

                    /**
                     * 获取录制文件归属者。
                     * @return MaterialOwner 录制文件归属者。
                     * 
                     */
                    Entity GetMaterialOwner() const;

                    /**
                     * 设置录制文件归属者。
                     * @param _materialOwner 录制文件归属者。
                     * 
                     */
                    void SetMaterialOwner(const Entity& _materialOwner);

                    /**
                     * 判断参数 MaterialOwner 是否已赋值
                     * @return MaterialOwner 是否已赋值
                     * 
                     */
                    bool MaterialOwnerHasBeenSet() const;

                    /**
                     * 获取录制文件存储分类路径。
                     * @return MaterialClassPath 录制文件存储分类路径。
                     * 
                     */
                    std::string GetMaterialClassPath() const;

                    /**
                     * 设置录制文件存储分类路径。
                     * @param _materialClassPath 录制文件存储分类路径。
                     * 
                     */
                    void SetMaterialClassPath(const std::string& _materialClassPath);

                    /**
                     * 判断参数 MaterialClassPath 是否已赋值
                     * @return MaterialClassPath 是否已赋值
                     * 
                     */
                    bool MaterialClassPathHasBeenSet() const;

                    /**
                     * 获取回放推流地址。
                     * @return PushStreamUrl 回放推流地址。
                     * 
                     */
                    std::string GetPushStreamUrl() const;

                    /**
                     * 设置回放推流地址。
                     * @param _pushStreamUrl 回放推流地址。
                     * 
                     */
                    void SetPushStreamUrl(const std::string& _pushStreamUrl);

                    /**
                     * 判断参数 PushStreamUrl 是否已赋值
                     * @return PushStreamUrl 是否已赋值
                     * 
                     */
                    bool PushStreamUrlHasBeenSet() const;

                private:

                    /**
                     * 录制拉流地址。
                     */
                    std::string m_pullStreamUrl;
                    bool m_pullStreamUrlHasBeenSet;

                    /**
                     * 录制文件归属者。
                     */
                    Entity m_materialOwner;
                    bool m_materialOwnerHasBeenSet;

                    /**
                     * 录制文件存储分类路径。
                     */
                    std::string m_materialClassPath;
                    bool m_materialClassPathHasBeenSet;

                    /**
                     * 回放推流地址。
                     */
                    std::string m_pushStreamUrl;
                    bool m_pushStreamUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_RECORDREPLAYPROJECTINPUT_H_
