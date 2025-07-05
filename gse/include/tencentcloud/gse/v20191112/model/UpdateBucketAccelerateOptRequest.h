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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETACCELERATEOPTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETACCELERATEOPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * UpdateBucketAccelerateOpt请求参数结构体
                */
                class UpdateBucketAccelerateOptRequest : public AbstractModel
                {
                public:
                    UpdateBucketAccelerateOptRequest();
                    ~UpdateBucketAccelerateOptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取true为开启全球加速，false为关闭
                     * @return Allowed true为开启全球加速，false为关闭
                     * 
                     */
                    bool GetAllowed() const;

                    /**
                     * 设置true为开启全球加速，false为关闭
                     * @param _allowed true为开启全球加速，false为关闭
                     * 
                     */
                    void SetAllowed(const bool& _allowed);

                    /**
                     * 判断参数 Allowed 是否已赋值
                     * @return Allowed 是否已赋值
                     * 
                     */
                    bool AllowedHasBeenSet() const;

                private:

                    /**
                     * true为开启全球加速，false为关闭
                     */
                    bool m_allowed;
                    bool m_allowedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETACCELERATEOPTREQUEST_H_
