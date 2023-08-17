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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_UPDATELOCALTASKRESULTREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_UPDATELOCALTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * UpdateLocalTaskResult请求参数结构体
                */
                class UpdateLocalTaskResultRequest : public AbstractModel
                {
                public:
                    UpdateLocalTaskResultRequest();
                    ~UpdateLocalTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return Sid 任务id
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置任务id
                     * @param _sid 任务id
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取一级任务code。标记任务状态
                     * @return ResultCode 一级任务code。标记任务状态
                     * 
                     */
                    int64_t GetResultCode() const;

                    /**
                     * 设置一级任务code。标记任务状态
                     * @param _resultCode 一级任务code。标记任务状态
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
                     * 获取二级错误码
                     * @return SubCode 二级错误码
                     * 
                     */
                    int64_t GetSubCode() const;

                    /**
                     * 设置二级错误码
                     * @param _subCode 二级错误码
                     * 
                     */
                    void SetSubCode(const int64_t& _subCode);

                    /**
                     * 判断参数 SubCode 是否已赋值
                     * @return SubCode 是否已赋值
                     * 
                     */
                    bool SubCodeHasBeenSet() const;

                    /**
                     * 获取二级错误信息
                     * @return ErrMsg 二级错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置二级错误信息
                     * @param _errMsg 二级错误信息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 一级任务code。标记任务状态
                     */
                    int64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 二级错误码
                     */
                    int64_t m_subCode;
                    bool m_subCodeHasBeenSet;

                    /**
                     * 二级错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_UPDATELOCALTASKRESULTREQUEST_H_
