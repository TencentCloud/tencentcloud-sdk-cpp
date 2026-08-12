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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIGDIFF_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIGDIFF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ObjectKV.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 差异化更新配置信息
                */
                class ServerBaseConfigDiff : public AbstractModel
                {
                public:
                    ServerBaseConfigDiff();
                    ~ServerBaseConfigDiff() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字符串参数 Key：EnvParam
                     * @return StrParams 字符串参数 Key：EnvParam
                     * 
                     */
                    std::vector<ObjectKV> GetStrParams() const;

                    /**
                     * 设置字符串参数 Key：EnvParam
                     * @param _strParams 字符串参数 Key：EnvParam
                     * 
                     */
                    void SetStrParams(const std::vector<ObjectKV>& _strParams);

                    /**
                     * 判断参数 StrParams 是否已赋值
                     * @return StrParams 是否已赋值
                     * 
                     */
                    bool StrParamsHasBeenSet() const;

                private:

                    /**
                     * 字符串参数 Key：EnvParam
                     */
                    std::vector<ObjectKV> m_strParams;
                    bool m_strParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIGDIFF_H_
