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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPOISEXISTRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPOISEXISTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 仓库是否存在的返回值
                */
                class RepoIsExistResp : public AbstractModel
                {
                public:
                    RepoIsExistResp();
                    ~RepoIsExistResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库是否存在
                     * @return IsExist 仓库是否存在
                     * 
                     */
                    bool GetIsExist() const;

                    /**
                     * 设置仓库是否存在
                     * @param _isExist 仓库是否存在
                     * 
                     */
                    void SetIsExist(const bool& _isExist);

                    /**
                     * 判断参数 IsExist 是否已赋值
                     * @return IsExist 是否已赋值
                     * 
                     */
                    bool IsExistHasBeenSet() const;

                private:

                    /**
                     * 仓库是否存在
                     */
                    bool m_isExist;
                    bool m_isExistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPOISEXISTRESP_H_
