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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELTESTRESULT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELTESTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ProviderTestConnectionErrorInfo.h>
#include <tencentcloud/clb/v20180317/model/TestConnectionRequestInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BYOK健康探测结果
                */
                class ModelTestResult : public AbstractModel
                {
                public:
                    ModelTestResult();
                    ~ModelTestResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型</p>
                     * @return Model <p>模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型</p>
                     * @param _model <p>模型</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>健康状况</p><p>枚举值：</p><ul><li>Success： 健康</li><li>Error： 不健康</li></ul>
                     * @return Status <p>健康状况</p><p>枚举值：</p><ul><li>Success： 健康</li><li>Error： 不健康</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>健康状况</p><p>枚举值：</p><ul><li>Success： 健康</li><li>Error： 不健康</li></ul>
                     * @param _status <p>健康状况</p><p>枚举值：</p><ul><li>Success： 健康</li><li>Error： 不健康</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorInfo <p>错误信息</p>
                     * 
                     */
                    ProviderTestConnectionErrorInfo GetErrorInfo() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errorInfo <p>错误信息</p>
                     * 
                     */
                    void SetErrorInfo(const ProviderTestConnectionErrorInfo& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取<p>探测请求</p>
                     * @return TestConnectionRequest <p>探测请求</p>
                     * 
                     */
                    TestConnectionRequestInfo GetTestConnectionRequest() const;

                    /**
                     * 设置<p>探测请求</p>
                     * @param _testConnectionRequest <p>探测请求</p>
                     * 
                     */
                    void SetTestConnectionRequest(const TestConnectionRequestInfo& _testConnectionRequest);

                    /**
                     * 判断参数 TestConnectionRequest 是否已赋值
                     * @return TestConnectionRequest 是否已赋值
                     * 
                     */
                    bool TestConnectionRequestHasBeenSet() const;

                private:

                    /**
                     * <p>模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>健康状况</p><p>枚举值：</p><ul><li>Success： 健康</li><li>Error： 不健康</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    ProviderTestConnectionErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>探测请求</p>
                     */
                    TestConnectionRequestInfo m_testConnectionRequest;
                    bool m_testConnectionRequestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELTESTRESULT_H_
