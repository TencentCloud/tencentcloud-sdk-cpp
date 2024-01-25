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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADNEWSQLRESULTRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADNEWSQLRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DownloadNewSqlResult返回参数结构体
                */
                class DownloadNewSqlResultResponse : public AbstractModel
                {
                public:
                    DownloadNewSqlResultResponse();
                    ~DownloadNewSqlResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下载结果对应的cos path
                     * @return CosPath 下载结果对应的cos path
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取下载结果对应的bucketName
                     * @return CosBucketName 下载结果对应的bucketName
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                private:

                    /**
                     * 下载结果对应的cos path
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * 下载结果对应的bucketName
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADNEWSQLRESULTRESPONSE_H_
