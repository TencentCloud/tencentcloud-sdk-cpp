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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITAUTORIGGINGJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITAUTORIGGINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/InputFile3D.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitAutoRiggingJob请求参数结构体
                */
                class SubmitAutoRiggingJobRequest : public AbstractModel
                {
                public:
                    SubmitAutoRiggingJobRequest();
                    ~SubmitAutoRiggingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>人形角色需采用标准姿态（A Pose 或 T Pose），尽量保持无动作状态。<br>模型中不应包含人体以外的组件（如武器、坐骑、翅膀等），避免松散衣物、配饰及复杂发型。<br>非人形角色建议上传二足、四足、鸟类等单一生命体模型，姿态应尽量简洁，无夸张或复杂动作，且不支持动作模版生成。3D模型文件必选其一，参考值：<br>FBX：3D模型文件，格式为FBX，文件大小不超过60Mb；<br>GLB：3D模型文件，格式为GLB，文件大小不超过60Mb；</p>
                     * @return File3D <p>人形角色需采用标准姿态（A Pose 或 T Pose），尽量保持无动作状态。<br>模型中不应包含人体以外的组件（如武器、坐骑、翅膀等），避免松散衣物、配饰及复杂发型。<br>非人形角色建议上传二足、四足、鸟类等单一生命体模型，姿态应尽量简洁，无夸张或复杂动作，且不支持动作模版生成。3D模型文件必选其一，参考值：<br>FBX：3D模型文件，格式为FBX，文件大小不超过60Mb；<br>GLB：3D模型文件，格式为GLB，文件大小不超过60Mb；</p>
                     * 
                     */
                    InputFile3D GetFile3D() const;

                    /**
                     * 设置<p>人形角色需采用标准姿态（A Pose 或 T Pose），尽量保持无动作状态。<br>模型中不应包含人体以外的组件（如武器、坐骑、翅膀等），避免松散衣物、配饰及复杂发型。<br>非人形角色建议上传二足、四足、鸟类等单一生命体模型，姿态应尽量简洁，无夸张或复杂动作，且不支持动作模版生成。3D模型文件必选其一，参考值：<br>FBX：3D模型文件，格式为FBX，文件大小不超过60Mb；<br>GLB：3D模型文件，格式为GLB，文件大小不超过60Mb；</p>
                     * @param _file3D <p>人形角色需采用标准姿态（A Pose 或 T Pose），尽量保持无动作状态。<br>模型中不应包含人体以外的组件（如武器、坐骑、翅膀等），避免松散衣物、配饰及复杂发型。<br>非人形角色建议上传二足、四足、鸟类等单一生命体模型，姿态应尽量简洁，无夸张或复杂动作，且不支持动作模版生成。3D模型文件必选其一，参考值：<br>FBX：3D模型文件，格式为FBX，文件大小不超过60Mb；<br>GLB：3D模型文件，格式为GLB，文件大小不超过60Mb；</p>
                     * 
                     */
                    void SetFile3D(const InputFile3D& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取<p>预设动作类型，参考值：</p><ol><li>回旋踢  </li><li>左勾拳  </li><li>蓄力攻击  </li><li>蓄力出拳  </li><li>二连击打  </li><li>二连击打-2  </li><li>后撤  </li><li>受击  </li><li>受击-2  </li><li>受击-3  </li><li>受击倒地-1  </li><li>受击倒地-2  </li><li>落地  </li><li>沮丧  </li><li>割喉  </li><li>刺拳  </li><li>连续击打  </li><li>踢腿  </li><li>侧踢  </li><li>打太极  </li><li>后空翻  </li><li>蹲姿转体  </li><li>走路-1  </li><li>走路-2  </li><li>走路-3  </li><li>待机-1  </li><li>待机-2  </li><li>街舞  </li><li>扭扭舞  </li><li>左转弯  </li><li>右转弯  </li><li>慢跑  </li><li>慢跑-2  </li><li>奔跑  </li><li>冲刺跑-1  </li><li>冲刺跑-2  </li><li>冲刺跑-3  </li><li>原地跳-1  </li><li>滑铲  </li><li>向前大跳  </li><li>向前大跳-2  </li><li>跨越  </li><li>恐吓  </li><li>向前跌倒  </li><li>右转  </li><li>原地跳-2  </li><li>转身  </li><li>发送冲击波</li></ol>
                     * @return MotionType <p>预设动作类型，参考值：</p><ol><li>回旋踢  </li><li>左勾拳  </li><li>蓄力攻击  </li><li>蓄力出拳  </li><li>二连击打  </li><li>二连击打-2  </li><li>后撤  </li><li>受击  </li><li>受击-2  </li><li>受击-3  </li><li>受击倒地-1  </li><li>受击倒地-2  </li><li>落地  </li><li>沮丧  </li><li>割喉  </li><li>刺拳  </li><li>连续击打  </li><li>踢腿  </li><li>侧踢  </li><li>打太极  </li><li>后空翻  </li><li>蹲姿转体  </li><li>走路-1  </li><li>走路-2  </li><li>走路-3  </li><li>待机-1  </li><li>待机-2  </li><li>街舞  </li><li>扭扭舞  </li><li>左转弯  </li><li>右转弯  </li><li>慢跑  </li><li>慢跑-2  </li><li>奔跑  </li><li>冲刺跑-1  </li><li>冲刺跑-2  </li><li>冲刺跑-3  </li><li>原地跳-1  </li><li>滑铲  </li><li>向前大跳  </li><li>向前大跳-2  </li><li>跨越  </li><li>恐吓  </li><li>向前跌倒  </li><li>右转  </li><li>原地跳-2  </li><li>转身  </li><li>发送冲击波</li></ol>
                     * 
                     */
                    int64_t GetMotionType() const;

                    /**
                     * 设置<p>预设动作类型，参考值：</p><ol><li>回旋踢  </li><li>左勾拳  </li><li>蓄力攻击  </li><li>蓄力出拳  </li><li>二连击打  </li><li>二连击打-2  </li><li>后撤  </li><li>受击  </li><li>受击-2  </li><li>受击-3  </li><li>受击倒地-1  </li><li>受击倒地-2  </li><li>落地  </li><li>沮丧  </li><li>割喉  </li><li>刺拳  </li><li>连续击打  </li><li>踢腿  </li><li>侧踢  </li><li>打太极  </li><li>后空翻  </li><li>蹲姿转体  </li><li>走路-1  </li><li>走路-2  </li><li>走路-3  </li><li>待机-1  </li><li>待机-2  </li><li>街舞  </li><li>扭扭舞  </li><li>左转弯  </li><li>右转弯  </li><li>慢跑  </li><li>慢跑-2  </li><li>奔跑  </li><li>冲刺跑-1  </li><li>冲刺跑-2  </li><li>冲刺跑-3  </li><li>原地跳-1  </li><li>滑铲  </li><li>向前大跳  </li><li>向前大跳-2  </li><li>跨越  </li><li>恐吓  </li><li>向前跌倒  </li><li>右转  </li><li>原地跳-2  </li><li>转身  </li><li>发送冲击波</li></ol>
                     * @param _motionType <p>预设动作类型，参考值：</p><ol><li>回旋踢  </li><li>左勾拳  </li><li>蓄力攻击  </li><li>蓄力出拳  </li><li>二连击打  </li><li>二连击打-2  </li><li>后撤  </li><li>受击  </li><li>受击-2  </li><li>受击-3  </li><li>受击倒地-1  </li><li>受击倒地-2  </li><li>落地  </li><li>沮丧  </li><li>割喉  </li><li>刺拳  </li><li>连续击打  </li><li>踢腿  </li><li>侧踢  </li><li>打太极  </li><li>后空翻  </li><li>蹲姿转体  </li><li>走路-1  </li><li>走路-2  </li><li>走路-3  </li><li>待机-1  </li><li>待机-2  </li><li>街舞  </li><li>扭扭舞  </li><li>左转弯  </li><li>右转弯  </li><li>慢跑  </li><li>慢跑-2  </li><li>奔跑  </li><li>冲刺跑-1  </li><li>冲刺跑-2  </li><li>冲刺跑-3  </li><li>原地跳-1  </li><li>滑铲  </li><li>向前大跳  </li><li>向前大跳-2  </li><li>跨越  </li><li>恐吓  </li><li>向前跌倒  </li><li>右转  </li><li>原地跳-2  </li><li>转身  </li><li>发送冲击波</li></ol>
                     * 
                     */
                    void SetMotionType(const int64_t& _motionType);

                    /**
                     * 判断参数 MotionType 是否已赋值
                     * @return MotionType 是否已赋值
                     * 
                     */
                    bool MotionTypeHasBeenSet() const;

                private:

                    /**
                     * <p>人形角色需采用标准姿态（A Pose 或 T Pose），尽量保持无动作状态。<br>模型中不应包含人体以外的组件（如武器、坐骑、翅膀等），避免松散衣物、配饰及复杂发型。<br>非人形角色建议上传二足、四足、鸟类等单一生命体模型，姿态应尽量简洁，无夸张或复杂动作，且不支持动作模版生成。3D模型文件必选其一，参考值：<br>FBX：3D模型文件，格式为FBX，文件大小不超过60Mb；<br>GLB：3D模型文件，格式为GLB，文件大小不超过60Mb；</p>
                     */
                    InputFile3D m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * <p>预设动作类型，参考值：</p><ol><li>回旋踢  </li><li>左勾拳  </li><li>蓄力攻击  </li><li>蓄力出拳  </li><li>二连击打  </li><li>二连击打-2  </li><li>后撤  </li><li>受击  </li><li>受击-2  </li><li>受击-3  </li><li>受击倒地-1  </li><li>受击倒地-2  </li><li>落地  </li><li>沮丧  </li><li>割喉  </li><li>刺拳  </li><li>连续击打  </li><li>踢腿  </li><li>侧踢  </li><li>打太极  </li><li>后空翻  </li><li>蹲姿转体  </li><li>走路-1  </li><li>走路-2  </li><li>走路-3  </li><li>待机-1  </li><li>待机-2  </li><li>街舞  </li><li>扭扭舞  </li><li>左转弯  </li><li>右转弯  </li><li>慢跑  </li><li>慢跑-2  </li><li>奔跑  </li><li>冲刺跑-1  </li><li>冲刺跑-2  </li><li>冲刺跑-3  </li><li>原地跳-1  </li><li>滑铲  </li><li>向前大跳  </li><li>向前大跳-2  </li><li>跨越  </li><li>恐吓  </li><li>向前跌倒  </li><li>右转  </li><li>原地跳-2  </li><li>转身  </li><li>发送冲击波</li></ol>
                     */
                    int64_t m_motionType;
                    bool m_motionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITAUTORIGGINGJOBREQUEST_H_
