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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANDRECORDLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANDRECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainAndRecordList请求参数结构体
                */
                class DescribeDomainAndRecordListRequest : public AbstractModel
                {
                public:
                    DescribeDomainAndRecordListRequest();
                    ~DescribeDomainAndRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索所有域名。AllDomain、GroupIdList、DomainList、DomainIdList 参数传任一个即可。优先级为：AllDomain > GroupIdList  > DomainList > DomainIdList。
                     * @return AllDomain 搜索所有域名。AllDomain、GroupIdList、DomainList、DomainIdList 参数传任一个即可。优先级为：AllDomain > GroupIdList  > DomainList > DomainIdList。
                     * 
                     */
                    std::string GetAllDomain() const;

                    /**
                     * 设置搜索所有域名。AllDomain、GroupIdList、DomainList、DomainIdList 参数传任一个即可。优先级为：AllDomain > GroupIdList  > DomainList > DomainIdList。
                     * @param _allDomain 搜索所有域名。AllDomain、GroupIdList、DomainList、DomainIdList 参数传任一个即可。优先级为：AllDomain > GroupIdList  > DomainList > DomainIdList。
                     * 
                     */
                    void SetAllDomain(const std::string& _allDomain);

                    /**
                     * 判断参数 AllDomain 是否已赋值
                     * @return AllDomain 是否已赋值
                     * 
                     */
                    bool AllDomainHasBeenSet() const;

                    /**
                     * 获取要搜索的域名列表。
                     * @return DomainList 要搜索的域名列表。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置要搜索的域名列表。
                     * @param _domainList 要搜索的域名列表。
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取要搜索的域名 ID 列表。
                     * @return DomainIdList 要搜索的域名 ID 列表。
                     * 
                     */
                    std::vector<uint64_t> GetDomainIdList() const;

                    /**
                     * 设置要搜索的域名 ID 列表。
                     * @param _domainIdList 要搜索的域名 ID 列表。
                     * 
                     */
                    void SetDomainIdList(const std::vector<uint64_t>& _domainIdList);

                    /**
                     * 判断参数 DomainIdList 是否已赋值
                     * @return DomainIdList 是否已赋值
                     * 
                     */
                    bool DomainIdListHasBeenSet() const;

                    /**
                     * 获取要搜索的域名分组 ID 列表。
                     * @return GroupIdList 要搜索的域名分组 ID 列表。
                     * 
                     */
                    std::vector<uint64_t> GetGroupIdList() const;

                    /**
                     * 设置要搜索的域名分组 ID 列表。
                     * @param _groupIdList 要搜索的域名分组 ID 列表。
                     * 
                     */
                    void SetGroupIdList(const std::vector<uint64_t>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                    /**
                     * 获取记录类型筛选
                     * @return RecordType 记录类型筛选
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型筛选
                     * @param _recordType 记录类型筛选
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取子域名筛选
                     * @return SubKeyword 子域名筛选
                     * 
                     */
                    std::string GetSubKeyword() const;

                    /**
                     * 设置子域名筛选
                     * @param _subKeyword 子域名筛选
                     * 
                     */
                    void SetSubKeyword(const std::string& _subKeyword);

                    /**
                     * 判断参数 SubKeyword 是否已赋值
                     * @return SubKeyword 是否已赋值
                     * 
                     */
                    bool SubKeywordHasBeenSet() const;

                    /**
                     * 获取记录值筛选
                     * @return ValueKeyword 记录值筛选
                     * 
                     */
                    std::string GetValueKeyword() const;

                    /**
                     * 设置记录值筛选
                     * @param _valueKeyword 记录值筛选
                     * 
                     */
                    void SetValueKeyword(const std::string& _valueKeyword);

                    /**
                     * 判断参数 ValueKeyword 是否已赋值
                     * @return ValueKeyword 是否已赋值
                     * 
                     */
                    bool ValueKeywordHasBeenSet() const;

                    /**
                     * 获取线路筛选
                     * @return Area 线路筛选
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置线路筛选
                     * @param _area 线路筛选
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取备注筛选
                     * @return Remark 备注筛选
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注筛选
                     * @param _remark 备注筛选
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取记录状态筛选
1：正常
0：暂停

                     * @return Enabled 记录状态筛选
1：正常
0：暂停

                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置记录状态筛选
1：正常
0：暂停

                     * @param _enabled 记录状态筛选
1：正常
0：暂停

                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 搜索所有域名。AllDomain、GroupIdList、DomainList、DomainIdList 参数传任一个即可。优先级为：AllDomain > GroupIdList  > DomainList > DomainIdList。
                     */
                    std::string m_allDomain;
                    bool m_allDomainHasBeenSet;

                    /**
                     * 要搜索的域名列表。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 要搜索的域名 ID 列表。
                     */
                    std::vector<uint64_t> m_domainIdList;
                    bool m_domainIdListHasBeenSet;

                    /**
                     * 要搜索的域名分组 ID 列表。
                     */
                    std::vector<uint64_t> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                    /**
                     * 记录类型筛选
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 子域名筛选
                     */
                    std::string m_subKeyword;
                    bool m_subKeywordHasBeenSet;

                    /**
                     * 记录值筛选
                     */
                    std::string m_valueKeyword;
                    bool m_valueKeywordHasBeenSet;

                    /**
                     * 线路筛选
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 备注筛选
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 记录状态筛选
1：正常
0：暂停

                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINANDRECORDLISTREQUEST_H_
