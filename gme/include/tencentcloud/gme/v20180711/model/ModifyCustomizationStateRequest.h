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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_MODIFYCUSTOMIZATIONSTATEREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_MODIFYCUSTOMIZATIONSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ModifyCustomizationState请求参数结构体
                */
                class ModifyCustomizationStateRequest : public AbstractModel
                {
                public:
                    ModifyCustomizationStateRequest();
                    ~ModifyCustomizationStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param _modelId 模型ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取想要变换的模型状态，-1代表下线，1代表上线
                     * @return ToState 想要变换的模型状态，-1代表下线，1代表上线
                     * 
                     */
                    int64_t GetToState() const;

                    /**
                     * 设置想要变换的模型状态，-1代表下线，1代表上线
                     * @param _toState 想要变换的模型状态，-1代表下线，1代表上线
                     * 
                     */
                    void SetToState(const int64_t& _toState);

                    /**
                     * 判断参数 ToState 是否已赋值
                     * @return ToState 是否已赋值
                     * 
                     */
                    bool ToStateHasBeenSet() const;

                    /**
                     * 获取应用 ID，登录控制台创建应用得到的AppID
                     * @return BizId 应用 ID，登录控制台创建应用得到的AppID
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用 ID，登录控制台创建应用得到的AppID
                     * @param _bizId 应用 ID，登录控制台创建应用得到的AppID
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 想要变换的模型状态，-1代表下线，1代表上线
                     */
                    int64_t m_toState;
                    bool m_toStateHasBeenSet;

                    /**
                     * 应用 ID，登录控制台创建应用得到的AppID
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYCUSTOMIZATIONSTATEREQUEST_H_
