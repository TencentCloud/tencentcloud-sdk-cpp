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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SUCCESSDELETEVERSIONS_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SUCCESSDELETEVERSIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/SimpleVersion.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 删除成功的版本信息
                */
                class SuccessDeleteVersions : public AbstractModel
                {
                public:
                    SuccessDeleteVersions();
                    ~SuccessDeleteVersions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本简化信息
                     * @return Version 版本简化信息
                     * 
                     */
                    SimpleVersion GetVersion() const;

                    /**
                     * 设置版本简化信息
                     * @param _version 版本简化信息
                     * 
                     */
                    void SetVersion(const SimpleVersion& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取删除版本的 RequestId
                     * @return RequestId 删除版本的 RequestId
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置删除版本的 RequestId
                     * @param _requestId 删除版本的 RequestId
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取删除版本结果
                     * @return Result 删除版本结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置删除版本结果
                     * @param _result 删除版本结果
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
                     * 版本简化信息
                     */
                    SimpleVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 删除版本的 RequestId
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 删除版本结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SUCCESSDELETEVERSIONS_H_
