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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CreateUploadUrl请求参数结构体
                */
                class CreateUploadUrlRequest : public AbstractModel
                {
                public:
                    CreateUploadUrlRequest();
                    ~CreateUploadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于的接口
                     * @return TargetAction 用于的接口
                     */
                    std::string GetTargetAction() const;

                    /**
                     * 设置用于的接口
                     * @param TargetAction 用于的接口
                     */
                    void SetTargetAction(const std::string& _targetAction);

                    /**
                     * 判断参数 TargetAction 是否已赋值
                     * @return TargetAction 是否已赋值
                     */
                    bool TargetActionHasBeenSet() const;

                private:

                    /**
                     * 用于的接口
                     */
                    std::string m_targetAction;
                    bool m_targetActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLREQUEST_H_
