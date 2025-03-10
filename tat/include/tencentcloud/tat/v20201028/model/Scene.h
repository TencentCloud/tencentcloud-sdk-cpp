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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_SCENE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_SCENE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 场景详情。
                */
                class Scene : public AbstractModel
                {
                public:
                    Scene();
                    ~Scene() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景 ID 。
                     * @return SceneId 场景 ID 。
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景 ID 。
                     * @param _sceneId 场景 ID 。
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取场景名称。
                     * @return SceneName 场景名称。
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景名称。
                     * @param _sceneName 场景名称。
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取场景创建者。

- TAT：公共场景
                     * @return CreatedBy 场景创建者。

- TAT：公共场景
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置场景创建者。

- TAT：公共场景
                     * @param _createdBy 场景创建者。

- TAT：公共场景
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return CreatedTime 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _createdTime 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return UpdatedTime 更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _updatedTime 更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * 场景 ID 。
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 场景名称。
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 场景创建者。

- TAT：公共场景
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_SCENE_H_
