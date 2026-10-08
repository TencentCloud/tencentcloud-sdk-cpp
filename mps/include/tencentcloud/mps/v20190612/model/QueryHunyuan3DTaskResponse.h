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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/File3D.h>
#include <tencentcloud/mps/v20190612/model/ViewImage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * QueryHunyuan3DTask返回参数结构体
                */
                class QueryHunyuan3DTaskResponse : public AbstractModel
                {
                public:
                    QueryHunyuan3DTaskResponse();
                    ~QueryHunyuan3DTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>WAIT： 已排队，等待执行</li><li>RUN： 正在执行</li><li>DONE： 已成功完成，ResultFile3Ds 有值</li><li>FAIL： 已失败，ErrorCode / ErrorMessage 有值</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>WAIT： 已排队，等待执行</li><li>RUN： 正在执行</li><li>DONE： 已成功完成，ResultFile3Ds 有值</li><li>FAIL： 已失败，ErrorCode / ErrorMessage 有值</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>进度百分比，0~100。未知时为 0；DONE 时应为 100；FAIL 时保留最后一次已知值</p>
                     * @return Progress <p>进度百分比，0~100。未知时为 0；DONE 时应为 100；FAIL 时保留最后一次已知值</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>仅 Status=FAIL 时有值，字符串错误码（如 InternalError.ModelInference）</p>
                     * @return ErrorCode <p>仅 Status=FAIL 时有值，字符串错误码（如 InternalError.ModelInference）</p>
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>仅 Status=FAIL 时有值，详细文案</p>
                     * @return ErrorMessage <p>仅 Status=FAIL 时有值，详细文案</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>仅 Status=DONE 时有值，产物文件列表</p>
                     * @return ResultFile3Ds <p>仅 Status=DONE 时有值，产物文件列表</p>
                     * 
                     */
                    std::vector<File3D> GetResultFile3Ds() const;

                    /**
                     * 判断参数 ResultFile3Ds 是否已赋值
                     * @return ResultFile3Ds 是否已赋值
                     * 
                     */
                    bool ResultFile3DsHasBeenSet() const;

                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p><p>枚举值：</p><ul><li>text_to_3d： 文生3D</li><li>image_to_3d： 图生3D</li><li>multiview_to_3d： 多视图生3D</li><li>mesh_to_texture： 网格生纹理</li><li>mesh_to_geometry： 网格生几何</li></ul>
                     * @return TaskType <p>任务类型</p><p>枚举值：</p><ul><li>text_to_3d： 文生3D</li><li>image_to_3d： 图生3D</li><li>multiview_to_3d： 多视图生3D</li><li>mesh_to_texture： 网格生纹理</li><li>mesh_to_geometry： 网格生几何</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>输入的Prompt</p>
                     * @return Prompt <p>输入的Prompt</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>图生3D场景下输入的图片URL</p>
                     * @return RefImage <p>图生3D场景下输入的图片URL</p>
                     * 
                     */
                    std::string GetRefImage() const;

                    /**
                     * 判断参数 RefImage 是否已赋值
                     * @return RefImage 是否已赋值
                     * 
                     */
                    bool RefImageHasBeenSet() const;

                    /**
                     * 获取<p>多图生3D场景下输入的图片信息</p>
                     * @return MultiViewImages <p>多图生3D场景下输入的图片信息</p>
                     * 
                     */
                    std::vector<ViewImage> GetMultiViewImages() const;

                    /**
                     * 判断参数 MultiViewImages 是否已赋值
                     * @return MultiViewImages 是否已赋值
                     * 
                     */
                    bool MultiViewImagesHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务更新时间</p>
                     * @return UpdateTime <p>任务更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>提交任务的目标面数</p>
                     * @return FaceCount <p>提交任务的目标面数</p>
                     * 
                     */
                    uint64_t GetFaceCount() const;

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     * @return GenerateType <p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务在队列中的位置，数值越小越靠前；</p>
                     * @return QueuePosition <p>任务在队列中的位置，数值越小越靠前；</p>
                     * 
                     */
                    int64_t GetQueuePosition() const;

                    /**
                     * 判断参数 QueuePosition 是否已赋值
                     * @return QueuePosition 是否已赋值
                     * 
                     */
                    bool QueuePositionHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>WAIT： 已排队，等待执行</li><li>RUN： 正在执行</li><li>DONE： 已成功完成，ResultFile3Ds 有值</li><li>FAIL： 已失败，ErrorCode / ErrorMessage 有值</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>进度百分比，0~100。未知时为 0；DONE 时应为 100；FAIL 时保留最后一次已知值</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>仅 Status=FAIL 时有值，字符串错误码（如 InternalError.ModelInference）</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>仅 Status=FAIL 时有值，详细文案</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>仅 Status=DONE 时有值，产物文件列表</p>
                     */
                    std::vector<File3D> m_resultFile3Ds;
                    bool m_resultFile3DsHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型</p><p>枚举值：</p><ul><li>text_to_3d： 文生3D</li><li>image_to_3d： 图生3D</li><li>multiview_to_3d： 多视图生3D</li><li>mesh_to_texture： 网格生纹理</li><li>mesh_to_geometry： 网格生几何</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>输入的Prompt</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>图生3D场景下输入的图片URL</p>
                     */
                    std::string m_refImage;
                    bool m_refImageHasBeenSet;

                    /**
                     * <p>多图生3D场景下输入的图片信息</p>
                     */
                    std::vector<ViewImage> m_multiViewImages;
                    bool m_multiViewImagesHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>提交任务的目标面数</p>
                     */
                    uint64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>生成类型</p><p>枚举值：</p><ul><li>Normal： 生成完整 3D 资产（几何 + 纹理）</li><li>Geometry： 只生成几何体（无纹理，输出速度更快）</li><li>Texture： 只生成纹理（需要传 MeshUrl）</li></ul><p>默认值：Normal</p>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>任务在队列中的位置，数值越小越靠前；</p>
                     */
                    int64_t m_queuePosition;
                    bool m_queuePositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_
