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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETUSAGEBYDATEREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETUSAGEBYDATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetUsageByDate请求参数结构体
                */
                class GetUsageByDateRequest : public AbstractModel
                {
                public:
                    GetUsageByDateRequest();
                    ~GetUsageByDateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的业务类型名字列表
- asr_rt 实时识别
- asr_rec 录音文件识别
                     * @return BizNameList 需要查询的业务类型名字列表
- asr_rt 实时识别
- asr_rec 录音文件识别
                     * 
                     */
                    std::vector<std::string> GetBizNameList() const;

                    /**
                     * 设置需要查询的业务类型名字列表
- asr_rt 实时识别
- asr_rec 录音文件识别
                     * @param _bizNameList 需要查询的业务类型名字列表
- asr_rt 实时识别
- asr_rec 录音文件识别
                     * 
                     */
                    void SetBizNameList(const std::vector<std::string>& _bizNameList);

                    /**
                     * 判断参数 BizNameList 是否已赋值
                     * @return BizNameList 是否已赋值
                     * 
                     */
                    bool BizNameListHasBeenSet() const;

                    /**
                     * 获取查询开始时间
开始时间包含当天，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * @return StartDate 查询开始时间
开始时间包含当天，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询开始时间
开始时间包含当天，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * @param _startDate 查询开始时间
开始时间包含当天，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取查询结束时间
结束时间包含当天，，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * @return EndDate 查询结束时间
结束时间包含当天，，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询结束时间
结束时间包含当天，，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * @param _endDate 查询结束时间
结束时间包含当天，，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * 需要查询的业务类型名字列表
- asr_rt 实时识别
- asr_rec 录音文件识别
                     */
                    std::vector<std::string> m_bizNameList;
                    bool m_bizNameListHasBeenSet;

                    /**
                     * 查询开始时间
开始时间包含当天，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询结束时间
结束时间包含当天，，支持 YYYY-MM-DD 日期以国内时区为准
开始时间到结束时间需要在3个月以内
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETUSAGEBYDATEREQUEST_H_
