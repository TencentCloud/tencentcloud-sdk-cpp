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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CORPSHARECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CORPSHARECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Identity.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CorpShareConfig
                */
                class CorpShareConfig : public AbstractModel
                {
                public:
                    CorpShareConfig();
                    ~CorpShareConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>企业共享开关</p>
                     * @return Enabled <p>企业共享开关</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>企业共享开关</p>
                     * @param _enabled <p>企业共享开关</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>共享范围类型，1：企业全员，2：指定账户，3：指定空间</p>
                     * @return ShareScope <p>共享范围类型，1：企业全员，2：指定账户，3：指定空间</p>
                     * 
                     */
                    int64_t GetShareScope() const;

                    /**
                     * 设置<p>共享范围类型，1：企业全员，2：指定账户，3：指定空间</p>
                     * @param _shareScope <p>共享范围类型，1：企业全员，2：指定账户，3：指定空间</p>
                     * 
                     */
                    void SetShareScope(const int64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                    /**
                     * 获取<p>企业共享应用标签</p>
                     * @return TagIdList <p>企业共享应用标签</p>
                     * 
                     */
                    std::vector<std::string> GetTagIdList() const;

                    /**
                     * 设置<p>企业共享应用标签</p>
                     * @param _tagIdList <p>企业共享应用标签</p>
                     * 
                     */
                    void SetTagIdList(const std::vector<std::string>& _tagIdList);

                    /**
                     * 判断参数 TagIdList 是否已赋值
                     * @return TagIdList 是否已赋值
                     * 
                     */
                    bool TagIdListHasBeenSet() const;

                    /**
                     * 获取<p>共享范围信息(用户时StrId为uin,Name为用户名称;空间时StrId为空间ID,Name为空间名称)</p>
                     * @return ShareScopeList <p>共享范围信息(用户时StrId为uin,Name为用户名称;空间时StrId为空间ID,Name为空间名称)</p>
                     * 
                     */
                    std::vector<Identity> GetShareScopeList() const;

                    /**
                     * 设置<p>共享范围信息(用户时StrId为uin,Name为用户名称;空间时StrId为空间ID,Name为空间名称)</p>
                     * @param _shareScopeList <p>共享范围信息(用户时StrId为uin,Name为用户名称;空间时StrId为空间ID,Name为空间名称)</p>
                     * 
                     */
                    void SetShareScopeList(const std::vector<Identity>& _shareScopeList);

                    /**
                     * 判断参数 ShareScopeList 是否已赋值
                     * @return ShareScopeList 是否已赋值
                     * 
                     */
                    bool ShareScopeListHasBeenSet() const;

                private:

                    /**
                     * <p>企业共享开关</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>共享范围类型，1：企业全员，2：指定账户，3：指定空间</p>
                     */
                    int64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                    /**
                     * <p>企业共享应用标签</p>
                     */
                    std::vector<std::string> m_tagIdList;
                    bool m_tagIdListHasBeenSet;

                    /**
                     * <p>共享范围信息(用户时StrId为uin,Name为用户名称;空间时StrId为空间ID,Name为空间名称)</p>
                     */
                    std::vector<Identity> m_shareScopeList;
                    bool m_shareScopeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CORPSHARECONFIG_H_
