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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEMEDIAFORZHIXUEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEMEDIAFORZHIXUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/ExpressionConfigInfo.h>
#include <tencentcloud/mps/v20190612/model/ActionConfigInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * RecognizeMediaForZhiXue请求参数结构体
                */
                class RecognizeMediaForZhiXueRequest : public AbstractModel
                {
                public:
                    RecognizeMediaForZhiXueRequest();
                    ~RecognizeMediaForZhiXueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入媒体文件存储信息。
                     * @return InputInfo 输入媒体文件存储信息。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置输入媒体文件存储信息。
                     * @param _inputInfo 输入媒体文件存储信息。
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取表情识别参数配置。默认开启。
                     * @return ExpressionConfig 表情识别参数配置。默认开启。
                     * 
                     */
                    ExpressionConfigInfo GetExpressionConfig() const;

                    /**
                     * 设置表情识别参数配置。默认开启。
                     * @param _expressionConfig 表情识别参数配置。默认开启。
                     * 
                     */
                    void SetExpressionConfig(const ExpressionConfigInfo& _expressionConfig);

                    /**
                     * 判断参数 ExpressionConfig 是否已赋值
                     * @return ExpressionConfig 是否已赋值
                     * 
                     */
                    bool ExpressionConfigHasBeenSet() const;

                    /**
                     * 获取动作识别参数配置。默认开启。
                     * @return ActionConfig 动作识别参数配置。默认开启。
                     * 
                     */
                    ActionConfigInfo GetActionConfig() const;

                    /**
                     * 设置动作识别参数配置。默认开启。
                     * @param _actionConfig 动作识别参数配置。默认开启。
                     * 
                     */
                    void SetActionConfig(const ActionConfigInfo& _actionConfig);

                    /**
                     * 判断参数 ActionConfig 是否已赋值
                     * @return ActionConfig 是否已赋值
                     * 
                     */
                    bool ActionConfigHasBeenSet() const;

                private:

                    /**
                     * 输入媒体文件存储信息。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 表情识别参数配置。默认开启。
                     */
                    ExpressionConfigInfo m_expressionConfig;
                    bool m_expressionConfigHasBeenSet;

                    /**
                     * 动作识别参数配置。默认开启。
                     */
                    ActionConfigInfo m_actionConfig;
                    bool m_actionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEMEDIAFORZHIXUEREQUEST_H_
