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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOOUTPUTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 场景化视频输出信息。
                */
                class SceneVideoOutputInfo : public AbstractModel
                {
                public:
                    SceneVideoOutputInfo();
                    ~SceneVideoOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输出信息。</p>
                     * @return Info <p>输出信息。</p>
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置<p>输出信息。</p>
                     * @param _info <p>输出信息。</p>
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取<p>输出类型。</p>
                     * @return Type <p>输出类型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>输出类型。</p>
                     * @param _type <p>输出类型。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>输出信息。</p>
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * <p>输出类型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOOUTPUTINFO_H_
