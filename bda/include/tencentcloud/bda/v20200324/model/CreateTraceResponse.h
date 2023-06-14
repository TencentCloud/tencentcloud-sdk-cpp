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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_CREATETRACERESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_CREATETRACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateTrace返回参数结构体
                */
                class CreateTraceResponse : public AbstractModel
                {
                public:
                    CreateTraceResponse();
                    ~CreateTraceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人员动作轨迹唯一标识。
                     * @return TraceId 人员动作轨迹唯一标识。
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取人体识别所用的算法模型版本。
                     * @return BodyModelVersion 人体识别所用的算法模型版本。
                     * 
                     */
                    std::string GetBodyModelVersion() const;

                    /**
                     * 判断参数 BodyModelVersion 是否已赋值
                     * @return BodyModelVersion 是否已赋值
                     * 
                     */
                    bool BodyModelVersionHasBeenSet() const;

                    /**
                     * 获取输入的人体动作轨迹图片中的合法性校验结果。
只有为0时结果才有意义。
-1001: 输入图片不合法。-1002: 输入图片不能构成轨迹。
                     * @return InputRetCode 输入的人体动作轨迹图片中的合法性校验结果。
只有为0时结果才有意义。
-1001: 输入图片不合法。-1002: 输入图片不能构成轨迹。
                     * 
                     */
                    int64_t GetInputRetCode() const;

                    /**
                     * 判断参数 InputRetCode 是否已赋值
                     * @return InputRetCode 是否已赋值
                     * 
                     */
                    bool InputRetCodeHasBeenSet() const;

                    /**
                     * 获取输入的人体动作轨迹图片中的合法性校验结果详情。 
-1101:图片无效，-1102:url不合法。-1103:图片过大。-1104:图片下载失败。-1105:图片解码失败。-1109:图片分辨率过高。-2023:动作轨迹中有非同人图片。-2024: 动作轨迹提取失败。-2025: 人体检测失败。
                     * @return InputRetCodeDetails 输入的人体动作轨迹图片中的合法性校验结果详情。 
-1101:图片无效，-1102:url不合法。-1103:图片过大。-1104:图片下载失败。-1105:图片解码失败。-1109:图片分辨率过高。-2023:动作轨迹中有非同人图片。-2024: 动作轨迹提取失败。-2025: 人体检测失败。
                     * 
                     */
                    std::vector<int64_t> GetInputRetCodeDetails() const;

                    /**
                     * 判断参数 InputRetCodeDetails 是否已赋值
                     * @return InputRetCodeDetails 是否已赋值
                     * 
                     */
                    bool InputRetCodeDetailsHasBeenSet() const;

                private:

                    /**
                     * 人员动作轨迹唯一标识。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 人体识别所用的算法模型版本。
                     */
                    std::string m_bodyModelVersion;
                    bool m_bodyModelVersionHasBeenSet;

                    /**
                     * 输入的人体动作轨迹图片中的合法性校验结果。
只有为0时结果才有意义。
-1001: 输入图片不合法。-1002: 输入图片不能构成轨迹。
                     */
                    int64_t m_inputRetCode;
                    bool m_inputRetCodeHasBeenSet;

                    /**
                     * 输入的人体动作轨迹图片中的合法性校验结果详情。 
-1101:图片无效，-1102:url不合法。-1103:图片过大。-1104:图片下载失败。-1105:图片解码失败。-1109:图片分辨率过高。-2023:动作轨迹中有非同人图片。-2024: 动作轨迹提取失败。-2025: 人体检测失败。
                     */
                    std::vector<int64_t> m_inputRetCodeDetails;
                    bool m_inputRetCodeDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_CREATETRACERESPONSE_H_
