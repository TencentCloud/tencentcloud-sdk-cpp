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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_TIPOFFRESPONSE_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_TIPOFFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 举报接口响应数据
                */
                class TipoffResponse : public AbstractModel
                {
                public:
                    TipoffResponse();
                    ~TipoffResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取举报结果， "0-举报数据提交成功  99-举报数据提交失败"
                     * @return ResultCode 举报结果， "0-举报数据提交成功  99-举报数据提交失败"
                     * 
                     */
                    int64_t GetResultCode() const;

                    /**
                     * 设置举报结果， "0-举报数据提交成功  99-举报数据提交失败"
                     * @param _resultCode 举报结果， "0-举报数据提交成功  99-举报数据提交失败"
                     * 
                     */
                    void SetResultCode(const int64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取结果描述
                     * @return ResultMsg 结果描述
                     * 
                     */
                    std::string GetResultMsg() const;

                    /**
                     * 设置结果描述
                     * @param _resultMsg 结果描述
                     * 
                     */
                    void SetResultMsg(const std::string& _resultMsg);

                    /**
                     * 判断参数 ResultMsg 是否已赋值
                     * @return ResultMsg 是否已赋值
                     * 
                     */
                    bool ResultMsgHasBeenSet() const;

                private:

                    /**
                     * 举报结果， "0-举报数据提交成功  99-举报数据提交失败"
                     */
                    int64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 结果描述
                     */
                    std::string m_resultMsg;
                    bool m_resultMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_TIPOFFRESPONSE_H_
