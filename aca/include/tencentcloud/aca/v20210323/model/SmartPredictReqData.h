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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SMARTPREDICTREQDATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SMARTPREDICTREQDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/RequestCase.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 智能预测接口请求对象
                */
                class SmartPredictReqData : public AbstractModel
                {
                public:
                    SmartPredictReqData();
                    ~SmartPredictReqData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取病历和处方信息
                     * @return RequestCase 病历和处方信息
                     * 
                     */
                    RequestCase GetRequestCase() const;

                    /**
                     * 设置病历和处方信息
                     * @param _requestCase 病历和处方信息
                     * 
                     */
                    void SetRequestCase(const RequestCase& _requestCase);

                    /**
                     * 判断参数 RequestCase 是否已赋值
                     * @return RequestCase 是否已赋值
                     * 
                     */
                    bool RequestCaseHasBeenSet() const;

                    /**
                     * 获取0--默认值，同时返回**疾病预测**和**用药审查**结果<br>1--仅返回**疾病预测**结果<br>2--仅返回**用药审查**结果<br>已同时激活两个模块时，可按需使用 
                     * @return RequestType 0--默认值，同时返回**疾病预测**和**用药审查**结果<br>1--仅返回**疾病预测**结果<br>2--仅返回**用药审查**结果<br>已同时激活两个模块时，可按需使用 
                     * 
                     */
                    int64_t GetRequestType() const;

                    /**
                     * 设置0--默认值，同时返回**疾病预测**和**用药审查**结果<br>1--仅返回**疾病预测**结果<br>2--仅返回**用药审查**结果<br>已同时激活两个模块时，可按需使用 
                     * @param _requestType 0--默认值，同时返回**疾病预测**和**用药审查**结果<br>1--仅返回**疾病预测**结果<br>2--仅返回**用药审查**结果<br>已同时激活两个模块时，可按需使用 
                     * 
                     */
                    void SetRequestType(const int64_t& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                private:

                    /**
                     * 病历和处方信息
                     */
                    RequestCase m_requestCase;
                    bool m_requestCaseHasBeenSet;

                    /**
                     * 0--默认值，同时返回**疾病预测**和**用药审查**结果<br>1--仅返回**疾病预测**结果<br>2--仅返回**用药审查**结果<br>已同时激活两个模块时，可按需使用 
                     */
                    int64_t m_requestType;
                    bool m_requestTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SMARTPREDICTREQDATA_H_
