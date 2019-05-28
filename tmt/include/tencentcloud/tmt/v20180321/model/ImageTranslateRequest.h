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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATEREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslate请求参数结构体
                */
                class ImageTranslateRequest : public AbstractModel
                {
                public:
                    ImageTranslateRequest();
                    ~ImageTranslateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一id，返回时原样返回
                     * @return SessionUuid 唯一id，返回时原样返回
                     */
                    std::string GetSessionUuid() const;

                    /**
                     * 设置唯一id，返回时原样返回
                     * @param SessionUuid 唯一id，返回时原样返回
                     */
                    void SetSessionUuid(const std::string& _sessionUuid);

                    /**
                     * 判断参数 SessionUuid 是否已赋值
                     * @return SessionUuid 是否已赋值
                     */
                    bool SessionUuidHasBeenSet() const;

                    /**
                     * 获取doc:文档扫描
                     * @return Scene doc:文档扫描
                     */
                    std::string GetScene() const;

                    /**
                     * 设置doc:文档扫描
                     * @param Scene doc:文档扫描
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取图片数据的Base64字符串，图片大小上限为4M，建议对源图片进行一定程度压缩
                     * @return Data 图片数据的Base64字符串，图片大小上限为4M，建议对源图片进行一定程度压缩
                     */
                    std::string GetData() const;

                    /**
                     * 设置图片数据的Base64字符串，图片大小上限为4M，建议对源图片进行一定程度压缩
                     * @param Data 图片数据的Base64字符串，图片大小上限为4M，建议对源图片进行一定程度压缩
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取源语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @return Source 源语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @param Source 源语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @return Target 目标语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @param Target 目标语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * @return ProjectId 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * @param ProjectId 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 唯一id，返回时原样返回
                     */
                    std::string m_sessionUuid;
                    bool m_sessionUuidHasBeenSet;

                    /**
                     * doc:文档扫描
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 图片数据的Base64字符串，图片大小上限为4M，建议对源图片进行一定程度压缩
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 源语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATEREQUEST_H_
