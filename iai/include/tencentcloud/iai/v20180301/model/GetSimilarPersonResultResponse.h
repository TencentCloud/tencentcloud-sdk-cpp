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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_GETSIMILARPERSONRESULTRESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_GETSIMILARPERSONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetSimilarPersonResult返回参数结构体
                */
                class GetSimilarPersonResultResponse : public AbstractModel
                {
                public:
                    GetSimilarPersonResultResponse();
                    ~GetSimilarPersonResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查重任务完成进度。取值[0.0，100.0]。当且仅当值为100时，SimilarPersons才有意义。
                     * @return Progress 查重任务完成进度。取值[0.0，100.0]。当且仅当值为100时，SimilarPersons才有意义。
                     */
                    double GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取疑似同一人的人员信息文件临时下载链接， 有效时间为5分钟，结果文件实际保存90天。
文件内容由 SimilarPerson 的数组组成。
                     * @return SimilarPersonsUrl 疑似同一人的人员信息文件临时下载链接， 有效时间为5分钟，结果文件实际保存90天。
文件内容由 SimilarPerson 的数组组成。
                     */
                    std::string GetSimilarPersonsUrl() const;

                    /**
                     * 判断参数 SimilarPersonsUrl 是否已赋值
                     * @return SimilarPersonsUrl 是否已赋值
                     */
                    bool SimilarPersonsUrlHasBeenSet() const;

                private:

                    /**
                     * 查重任务完成进度。取值[0.0，100.0]。当且仅当值为100时，SimilarPersons才有意义。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 疑似同一人的人员信息文件临时下载链接， 有效时间为5分钟，结果文件实际保存90天。
文件内容由 SimilarPerson 的数组组成。
                     */
                    std::string m_similarPersonsUrl;
                    bool m_similarPersonsUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GETSIMILARPERSONRESULTRESPONSE_H_
