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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERSREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeCustomers请求参数结构体
                */
                class DescribeCustomersRequest : public AbstractModel
                {
                public:
                    DescribeCustomersRequest();
                    ~DescribeCustomersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询类型，0.个人，1负责部门，2.指定部门
                     * @return QueryType 查询类型，0.个人，1负责部门，2.指定部门
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型，0.个人，1负责部门，2.指定部门
                     * @param _queryType 查询类型，0.个人，1负责部门，2.指定部门
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取是否星级标记 1是 0否
                     * @return MarkFlag 是否星级标记 1是 0否
                     * 
                     */
                    int64_t GetMarkFlag() const;

                    /**
                     * 设置是否星级标记 1是 0否
                     * @param _markFlag 是否星级标记 1是 0否
                     * 
                     */
                    void SetMarkFlag(const int64_t& _markFlag);

                    /**
                     * 判断参数 MarkFlag 是否已赋值
                     * @return MarkFlag 是否已赋值
                     * 
                     */
                    bool MarkFlagHasBeenSet() const;

                    /**
                     * 获取客户标签，多个标签用逗号隔开
                     * @return TagIds 客户标签，多个标签用逗号隔开
                     * 
                     */
                    std::string GetTagIds() const;

                    /**
                     * 设置客户标签，多个标签用逗号隔开
                     * @param _tagIds 客户标签，多个标签用逗号隔开
                     * 
                     */
                    void SetTagIds(const std::string& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取员工标识筛选，0：非员工，1：员工
                     * @return RelChannelFlag 员工标识筛选，0：非员工，1：员工
                     * 
                     */
                    std::string GetRelChannelFlag() const;

                    /**
                     * 设置员工标识筛选，0：非员工，1：员工
                     * @param _relChannelFlag 员工标识筛选，0：非员工，1：员工
                     * 
                     */
                    void SetRelChannelFlag(const std::string& _relChannelFlag);

                    /**
                     * 判断参数 RelChannelFlag 是否已赋值
                     * @return RelChannelFlag 是否已赋值
                     * 
                     */
                    bool RelChannelFlagHasBeenSet() const;

                    /**
                     * 获取必须存在手机 1是 0否
                     * @return NeedPhoneFlag 必须存在手机 1是 0否
                     * 
                     */
                    int64_t GetNeedPhoneFlag() const;

                    /**
                     * 设置必须存在手机 1是 0否
                     * @param _needPhoneFlag 必须存在手机 1是 0否
                     * 
                     */
                    void SetNeedPhoneFlag(const int64_t& _needPhoneFlag);

                    /**
                     * 判断参数 NeedPhoneFlag 是否已赋值
                     * @return NeedPhoneFlag 是否已赋值
                     * 
                     */
                    bool NeedPhoneFlagHasBeenSet() const;

                    /**
                     * 获取省份
                     * @return Province 省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param _province 省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取性别 1男 2女
                     * @return Sex 性别 1男 2女
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置性别 1男 2女
                     * @param _sex 性别 1男 2女
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return KeyWord 城市
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置城市
                     * @param _keyWord 城市
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取查询开始位置
                     * @return Offset 查询开始位置
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询开始位置
                     * @param _offset 查询开始位置
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页记录条数
                     * @return Limit 每页记录条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页记录条数
                     * @param _limit 每页记录条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取子项目ID
                     * @return SubProjectId 子项目ID
                     * 
                     */
                    std::string GetSubProjectId() const;

                    /**
                     * 设置子项目ID
                     * @param _subProjectId 子项目ID
                     * 
                     */
                    void SetSubProjectId(const std::string& _subProjectId);

                    /**
                     * 判断参数 SubProjectId 是否已赋值
                     * @return SubProjectId 是否已赋值
                     * 
                     */
                    bool SubProjectIdHasBeenSet() const;

                private:

                    /**
                     * 查询类型，0.个人，1负责部门，2.指定部门
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否星级标记 1是 0否
                     */
                    int64_t m_markFlag;
                    bool m_markFlagHasBeenSet;

                    /**
                     * 客户标签，多个标签用逗号隔开
                     */
                    std::string m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * 员工标识筛选，0：非员工，1：员工
                     */
                    std::string m_relChannelFlag;
                    bool m_relChannelFlagHasBeenSet;

                    /**
                     * 必须存在手机 1是 0否
                     */
                    int64_t m_needPhoneFlag;
                    bool m_needPhoneFlagHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 性别 1男 2女
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 查询开始位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页记录条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 子项目ID
                     */
                    std::string m_subProjectId;
                    bool m_subProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERSREQUEST_H_
