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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STORAGENEWFILECREATEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STORAGENEWFILECREATEDEVENT_H_

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
                * 新文件生成事件
                */
                class StorageNewFileCreatedEvent : public AbstractModel
                {
                public:
                    StorageNewFileCreatedEvent();
                    ~StorageNewFileCreatedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云点播文件  Id。
                     * @return FileId 云点播文件  Id。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置云点播文件  Id。
                     * @param _fileId 云点播文件  Id。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取媒体 Id。
                     * @return MaterialId 媒体 Id。
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置媒体 Id。
                     * @param _materialId 媒体 Id。
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取操作者 Id。（废弃，请勿使用）
                     * @return Operator 操作者 Id。（废弃，请勿使用）
                     * @deprecated
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者 Id。（废弃，请勿使用）
                     * @param _operator 操作者 Id。（废弃，请勿使用）
                     * @deprecated
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作类型，可取值有：
<li>Upload：本地上传；</li>
<li>PullUpload：拉取上传；</li>
<li>VideoEdit：视频剪辑；</li>
<li>LiveStreamClip：直播流剪辑；</li>
<li>LiveStreamRecord：直播流录制。</li>
                     * @return OperationType 操作类型，可取值有：
<li>Upload：本地上传；</li>
<li>PullUpload：拉取上传；</li>
<li>VideoEdit：视频剪辑；</li>
<li>LiveStreamClip：直播流剪辑；</li>
<li>LiveStreamRecord：直播流录制。</li>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型，可取值有：
<li>Upload：本地上传；</li>
<li>PullUpload：拉取上传；</li>
<li>VideoEdit：视频剪辑；</li>
<li>LiveStreamClip：直播流剪辑；</li>
<li>LiveStreamRecord：直播流录制。</li>
                     * @param _operationType 操作类型，可取值有：
<li>Upload：本地上传；</li>
<li>PullUpload：拉取上传；</li>
<li>VideoEdit：视频剪辑；</li>
<li>LiveStreamClip：直播流剪辑；</li>
<li>LiveStreamRecord：直播流录制。</li>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取媒体归属。
                     * @return Owner 媒体归属。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置媒体归属。
                     * @param _owner 媒体归属。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取媒体分类路径。
                     * @return ClassPath 媒体分类路径。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置媒体分类路径。
                     * @param _classPath 媒体分类路径。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取生成文件的任务 Id。当生成新文件是拉取上传、视频剪辑、直播流剪辑时为任务 Id。
                     * @return TaskId 生成文件的任务 Id。当生成新文件是拉取上传、视频剪辑、直播流剪辑时为任务 Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置生成文件的任务 Id。当生成新文件是拉取上传、视频剪辑、直播流剪辑时为任务 Id。
                     * @param _taskId 生成文件的任务 Id。当生成新文件是拉取上传、视频剪辑、直播流剪辑时为任务 Id。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取来源上下文信息。视频剪辑生成新文件时此字段为项目 Id；直播流剪辑或者直播流录制生成新文件则为原始流地址。
                     * @return SourceContext 来源上下文信息。视频剪辑生成新文件时此字段为项目 Id；直播流剪辑或者直播流录制生成新文件则为原始流地址。
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置来源上下文信息。视频剪辑生成新文件时此字段为项目 Id；直播流剪辑或者直播流录制生成新文件则为原始流地址。
                     * @param _sourceContext 来源上下文信息。视频剪辑生成新文件时此字段为项目 Id；直播流剪辑或者直播流录制生成新文件则为原始流地址。
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                private:

                    /**
                     * 云点播文件  Id。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 媒体 Id。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 操作者 Id。（废弃，请勿使用）
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作类型，可取值有：
<li>Upload：本地上传；</li>
<li>PullUpload：拉取上传；</li>
<li>VideoEdit：视频剪辑；</li>
<li>LiveStreamClip：直播流剪辑；</li>
<li>LiveStreamRecord：直播流录制。</li>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 媒体归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 媒体分类路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 生成文件的任务 Id。当生成新文件是拉取上传、视频剪辑、直播流剪辑时为任务 Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 来源上下文信息。视频剪辑生成新文件时此字段为项目 Id；直播流剪辑或者直播流录制生成新文件则为原始流地址。
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STORAGENEWFILECREATEDEVENT_H_
