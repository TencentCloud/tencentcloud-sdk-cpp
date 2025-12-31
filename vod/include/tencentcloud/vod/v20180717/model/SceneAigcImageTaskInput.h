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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcImageSceneInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 场景化 AIGC 生图任务信息
                */
                class SceneAigcImageTaskInput : public AbstractModel
                {
                public:
                    SceneAigcImageTaskInput();
                    ~SceneAigcImageTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景化生图参数配置。
                     * @return SceneInfo 场景化生图参数配置。
                     * 
                     */
                    AigcImageSceneInfo GetSceneInfo() const;

                    /**
                     * 设置场景化生图参数配置。
                     * @param _sceneInfo 场景化生图参数配置。
                     * 
                     */
                    void SetSceneInfo(const AigcImageSceneInfo& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                    /**
                     * 获取输入图片列表。
                     * @return FileInfos 输入图片列表。
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置输入图片列表。
                     * @param _fileInfos 输入图片列表。
                     * 
                     */
                    void SetFileInfos(const std::vector<SceneAigcImageTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取场景化生图任务的输出媒体文件配置。
                     * @return OutputConfig 场景化生图任务的输出媒体文件配置。
                     * 
                     */
                    SceneAigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置场景化生图任务的输出媒体文件配置。
                     * @param _outputConfig 场景化生图任务的输出媒体文件配置。
                     * 
                     */
                    void SetOutputConfig(const SceneAigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * 场景化生图参数配置。
                     */
                    AigcImageSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * 输入图片列表。
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 场景化生图任务的输出媒体文件配置。
                     */
                    SceneAigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUT_H_
